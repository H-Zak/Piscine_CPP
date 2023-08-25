/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:50:12 by zheylkoss         #+#    #+#             */
/*   Updated: 2023/08/25 17:08:47 by zhamdouc         ###   ########.fr       */
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

void year(std::string line, int i)
{
	int year;

	year = atoi(line.substr(0,4).c_str());
	if (year < 2009)
	{
		if (i == 0)
			throw(std::range_error("Error database: wrong year"));
		else
			std::cerr << "Error database: wrong year";
		
	}
}

void month(std::string line, int i)
{
	int month;

	month = atoi(line.substr(5,7).c_str());
	if (month > 0 && month < 13)
		return ;
	else
	{
		if (i == 0)
			throw(std::range_error("Error database: wrong month"));
		else
			std::cerr << "Error database: wrong month";
		
	}
}

bool IsLeap (int year) {
 
 bool isLeap;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
              isLeap = true;
            else
               isLeap = false;
        }
        else
           isLeap = true;
    }
    else
    	isLeap= false;
    return isLeap;
}

void day(std::string line, int i)
{
	int day;
	int year = atoi(line.substr(0,4).c_str());
	int month;
	int daysInMonth[13];
	if (IsLeap(year))
	{
		// Initialize for leap year
		int leapYearDays[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		std::copy(leapYearDays, leapYearDays + 13, daysInMonth);
	} 
	else 
	{
		// Initialize for non-leap year
		int nonLeapYearDays[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		std::copy(nonLeapYearDays, nonLeapYearDays + 13, daysInMonth);
	}

	month = atoi(line.substr(5,7).c_str());
	day = atoi(line.substr(8,10).c_str());

	if (month >= 1 && month <= 12)
    {
        // Check if the day is within the valid range for the given month
        if (day >= 1 && day <= daysInMonth[month])
        {
            return;
        }
        else
        {
			if (i == 0)
            	throw(std::range_error("Error database: wrong day"));
			else
				std::cerr << "Error database: wrong day";
        }
    }
	return ;
}

void parsing_date(std::string line , size_t *i, int error)
{
	for (; (*i) < 10; (*i)++)
	{
		if((*i) < 4 && !std::isdigit(line[(*i)]))
			throw(std::range_error("Error : date incorrect"));
		if ((*i) == 4 && line[(*i)] != '-')
			throw(std::range_error("Error : date incorrect"));
		if((*i) == 4) 
			year(line, error);
		if (((*i) == 5 || (*i) == 6) && !std::isdigit(line[(*i)]))
			throw(std::range_error("Error : database not complete"));
		if ((*i) == 7 && line[(*i)] != '-')
			throw(std::range_error("Error : date incorrect"));
		if((*i) == 7) 
			month(line, error);
		if(((*i) == 8 || (*i) == 9) && !std::isdigit(line[(*i)]))
			throw(std::range_error("Error : date incorrect"));
		if ((*i) == 9)
			day(line, error);
	}
}

void parsing_value(std::string line, size_t *i, size_t *j)
{
	
	for (; (*i) < line.length(); (*i)++)
	{
		if ((*j) == 0 && !std::isdigit(line[(*i)]))
			throw(std::range_error("Error 1: value databse incorrect"));
		if ((*j) == 0 && std::isdigit(line[(*i)]))
		{
			(*j)++;
			(*i)++;
		}

		if ((*i) < line.length() && line[(*i)] == '.' && (*j) != 2)
		{
			(*j) = 2;
			(*i)++;
			if ((*i) >= line.length())
				throw(std::range_error("Error 2 : value database incorrect"));
			//std::cout << (*j) << line[i] << i << std::endl;
		}
		if ((*i) < line.length() && line[(*i)] == '.' && (*j) == 2)
		{
			//std::cout << (*j) << line[i] << i << std::endl;
			throw(std::range_error("Error 3: value database incorrect" + line));
		}
		if((*i) < line.length() && !std::isdigit(line[(*i)]))
			throw(std::range_error("Error 4 : database incorrect"));
	}
}

void parsing_value_input(std::string line, size_t *i, size_t *j)
{
	
	for (; (*i) < line.length(); (*i)++)
	{
		if ((*j) == 0 && !std::isdigit(line[(*i)]))
			std::cerr << "Error 1: value databse incorrect" << line << std::endl;
		if ((*j) == 0 && std::isdigit(line[(*i)]))
		{
			(*j)++;
			(*i)++;
		}

		if ((*i) < line.length() && line[(*i)] == '.' && (*j) != 2)
		{
			(*j) = 2;
			(*i)++;
			if ((*i) >= line.length())
				std::cerr << "Error 2 : value database incorrect" << line << std::endl;
			//std::cout << (*j) << line[i] << i << std::endl;
		}
		if ((*i) < line.length() && line[(*i)] == '.' && (*j) == 2)
		{
			//std::cout << (*j) << line[i] << i << std::endl;
			std::cerr << "Error 3: value database incorrect" << line << std::endl;
		}
		if((*i) < line.length() && !std::isdigit(line[(*i)]))
			std::cerr << "Error 4 : database incorrect" << line << std::endl;
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
	int nb_line = 2;
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
		parsing_date(line, &i, 0);
		if(i == 10 && line[i] != ',')
			throw(std::range_error("Error : separator database incorrect"));
		else
			i++;
		parsing_value(line, &i, &j);
		i = 0;
		j = 0;
		this->data_base.insert(std::make_pair(line.substr(0, 9), line.substr(11)));
		nb_line++;
		//std::cout << nb_line <<std::endl;
    }
	if (!data_base.empty())
	{
		iterator it = data_base.begin();
		std::cout << it->first << "->" << it->second << std::endl;
	}
	file.close();
}

void	BitcoinExchange::check_value(std::string line)
{
	double number = atof(line.substr(10).c_str());

	if (number < 0 || number > 1000)
	{
		std::cerr << "Wrong value\n";
	}
	if(this->data_base.find(line.substr(0, 9)) != this->data_base.end())
	{
		number =  number * atof(data_base[line.substr(0, 9)].c_str());
		std::cout << number << std::endl;
	}
	else (data_base.lower_bound())
}

void parse_input_file(std::string filename)//attention a l'ecriture de multiple message d'erreur
{
	 std::ifstream file(filename.c_str());
	 size_t i = 0;
	 size_t j = 0;
//	 size_t nb_line = 0;
	 int error = 0;

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
			error = 1;
		}
		parsing_date(line, &i, 1);
		if(i == 10 && line[i] != ' ' && line[i + 1] != '|' && line[i + 2] != ' ')
			std::cerr<< "Error : separator input incorrect\n";
		else
			i = i + 3;
		parsing_value_input(line, &i, &j);
		check_value(line);
		//ecrire le resultat ici
		i = 0;
		j = 0;
		//fonction qui va faire le calcul si error == 0;
		error = 0;
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