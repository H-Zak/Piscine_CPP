/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:50:12 by zheylkoss         #+#    #+#             */
/*   Updated: 2023/08/28 01:04:17 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    return;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &other)
{
    *this = other;
    return ;

}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &other)
{
    if (this != &other)
    {
        this->data_base = other.get_data_base();

    }
    return (*this);
}

BitcoinExchange::BitcoinExchange(std::string filename)
{
    parsefile(filename);
}

BitcoinExchange::~BitcoinExchange(void)
{
    return ;
}


std::map<std::string , std::string > BitcoinExchange::get_data_base(void) const
{
    return (this->data_base);
}



void parsing_value_input(std::string line, size_t *i, size_t *j, int &error)
{
	for (; (*i) < line.length(); (*i)++)
	{
		if ((*j) == 0 && !std::isdigit(line[(*i)]))
		{
			std::cerr << "Error 1: value input file incorrect" << std::endl;
			error = 2;
		}
		if ((*j) == 0 && std::isdigit(line[(*i)]))
		{
			(*j)++;
			(*i)++;
		}

		if ((*i) < line.length() && line[(*i)] == '.' && (*j) != 2)
		{
			(*j) = 2;
			(*i)++;
			if ((*i) >= line.length() && error != 0)
			{
				std::cerr << "Error 2 : value database incorrect" << line << std::endl;
				error = 2;
			}
			//std::cout << (*j) << line[i] << i << std::endl;
		}
		if (error != 2 && (*i) < line.length() && line[(*i)] == '.' && (*j) == 2)
		{
			//std::cout << (*j) << line[i] << i << std::endl;
			std::cerr << "Error 3: value database incorrect" << line << std::endl;
			error = 2;
		}
		if(error != 2 && (*i) < line.length() && !std::isdigit(line[(*i)]))
		{
			std::cerr << "Error 4 : database incorrect" /* << line  */<< std::endl;
			error = 2;
		}

	}
}

void BitcoinExchange::parsefile(std::string filename)
{
    std::ifstream file(filename.c_str());
    std::string line;
	std::ifstream data_file("data.csv");
	std::string parse;
	size_t  j = 0;
	size_t i = 0;
	//int nb_line = 2;
	int error = 0;
	//int which_line; a increment dans for pour savoir quelle ligne a un probleme
	//jour et mois ne peuvent pas etre egale a 0;

	if(!file.is_open())
		throw(std::range_error("problem with input"));
	if(!data_file.is_open())
		throw(std::range_error("problem with input"));
	std::getline(data_file, line);
	if ( line.compare("date,exchange_rate"))
		throw(std::range_error("Error : first line data_file"));
    while(std::getline(data_file, line))
	{
		if (line.length() < 12)
			throw(std::range_error("Error : database not complete"));
		parsing_date(line, &i, error);
		if(i == 10 && line[i] != ',')
			throw(std::range_error("Error : separator database incorrect"));
		else
			i++;
		parsing_value(line, &i, &j);
		i = 0;
		j = 0;
		this->data_base.insert(std::make_pair(line.substr(0, 9), line.substr(11)));
		//nb_line++;
		//std::cerr << error << std::endl;
		error = 0;
		//std::cout << nb_line <<std::endl;
    }
	// if (!data_base.empty())// a quoi ca sert ?
	// {
	// 	iterator it = data_base.begin();
	// 	std::cout << it->first << "->" << it->second << std::endl;
	// }
	file.close();
}

void	BitcoinExchange::check_value(std::string line, int &error)
{
	// std::cout << "valeur rate :" << line.substr(13) << std::endl;
	double number = atof(line.substr(13).c_str());
	if (number < 0 || number > 1000)
	{
		std::cerr << "Wrong value\n";
		error = 2;
		return ;
	}
	if(error != 2 && this->data_base.find(line.substr(0, 9)) != this->data_base.end())
	{
		number =  number * atof(data_base[line.substr(0, 9)].c_str());
		std::cout << number << std::endl;
		error = 2;
	}
	else
	{
		std::map<std::string, std::string>::iterator it = data_base.lower_bound(line.substr(10).c_str());
		if (it != data_base.end())
		{
			number =  number * atof(data_base[line.substr(0, 9)].c_str());
			std::cout << number << std::endl;
		}
		else
		{
			std::cerr << "No date found" << std::endl;
			error = 2;
		}
	}
}

void BitcoinExchange::parse_input_file(std::string filename)//attention a l'ecriture de multiple message d'erreur
{
	 std::ifstream file(filename.c_str());
	 size_t i = 0;
	 size_t j = 0;
	//  size_t error = 1;
	 int error = 1;

    if (!file.is_open()) {
        throw(std::runtime_error("Error: couldn't open the file\n"));
    }

    std::string line;
    if (std::getline(file, line)) {
        if (line.compare("date | value") != 0) {
            throw(std::runtime_error("Error: incorrect first line of test" + line));
        }
    } else {
        throw(std::runtime_error("Error: file is empty\n"));
    }
	while(std::getline(file, line))
	{
		if (line.length() < 12)
		{
			std::cerr << "Error : input not complete\n";
			error = 2;
		}
		if (error != 2)
			parsing_date(line, &i, error);
		if(error != 2 && i == 10 && line[i] != ' ' && line[i + 1] != '|' && line[i + 2] != ' ')
		{
			std::cerr<< "Error : separator input incorrect\n";
			error = 2;
		}
		else
			i = i + 3;
		if (error != 2)
			parsing_value_input(line, &i, &j, error);
		if (error == 1)
			std::cout << line.substr(0, 9) << "->";
		if (error != 2)
		{
			check_value(line, error);
			//std::cerr << error;
		}
		//ecrire le resultat ici
		i = 0;
		j = 0;
		//fonction qui va faire le calcul si error == 0;
		error = 1;
		// nb_line++;
		// std::cout << nb_line << line <<std::endl;
    }
	file.close();
}

void BitcoinExchange::calcul (std::string filename)
{
	//verifier que la date est apres la creation du bitcoin
	//verifier que la date existe
	//verifier que la valeur est compris entre 0 et 1000
	//2 valeur separer par
	parse_input_file(filename);
}
