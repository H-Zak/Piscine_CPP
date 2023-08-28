/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:50:12 by zheylkoss         #+#    #+#             */
/*   Updated: 2023/08/28 17:03:49 by zhamdouc         ###   ########.fr       */
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
			return ;
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
	int error = 0;

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
		this->data_base[line.substr(0, 10)] =  line.substr(11);
		error = 0;
    }
	file.close();
}

void	BitcoinExchange::check_value(std::string line, int &error)
{
	double number = atof(line.substr(13).c_str());
	if (number < 0 || number > 1000)
	{
		std::cerr << "Error: too large a number.\n";
		error = 2;
		return ;
	}
	if(error != 2 && (this->data_base.find(line.substr(0, 10)) != this->data_base.end()))
	{
		number =  number * atof(data_base[line.substr(0, 10)].c_str());
		std::cout << line.substr(0, 10) << " => " << line.substr(13) << " = " << number << std::endl;
		error = 2;
	}
	else
	{
		std::map<std::string, std::string>::iterator it = this->data_base.lower_bound(line.substr(0, 10));
		if (it == data_base.begin())
		{
			std::cerr << "date avant la premiere" << std::endl;
			error = 2;
			return ;
		}
		if (it != data_base.end())
		{
			--it;
			number =  number * atof(it->second.c_str());
			
			std::cout << line.substr(0 , 10) << " => " << line.substr(13) << " = " << number << std::endl;
		}
		else
		{
			--it;
			number =  number * atof(it->second.c_str());
			std::cout << line.substr(0 , 10) << " => " << line.substr(13) << " = " << number << std::endl;
		}
	}
}

void BitcoinExchange::parse_input_file(std::string filename)//attention a l'ecriture de multiple message d'erreur
{
	 std::ifstream file(filename.c_str());
	 size_t i = 0;
	 size_t j = 0;
	 int error = 1;

    if (!file.is_open()) {
        throw(std::runtime_error("Error: couldn't open the file\n"));
    }

    std::string line;
    if (std::getline(file, line)) {
        if (line.compare("date | value") != 0) {
            throw(std::runtime_error("Error: incorrect first line of test" + line));
        }
    } else 
        throw(std::runtime_error("Error: file is empty\n"));
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
		if (error != 2)
			check_value(line, error);
		i = 0;
		j = 0;
		error = 1;
    }
	file.close();
}


void BitcoinExchange::parsing_date(std::string line , size_t *i, int &error)
{
	for (; (*i) < 10; (*i)++)
	{
		if((*i) < 4 && !std::isdigit(line[(*i)]))
		{
			if (error != 1 )
				throw(std::range_error("Error : date incorrect"));
			else
				std::cerr << "Error : date incorrect" << std::endl;
			error = 2;
		}
		if (error != 2 && (*i) == 4 && line[(*i)] != '-')
		{
			if (error != 1)
				throw(std::range_error("Error : date incorrect"));
			else
				std::cerr << "Error : date incorrect" << std::endl;
			error = 2;
		}
		if(error != 2 && (*i) == 4)
			year(line, error);
		if (error != 2 && ((*i) == 5 || (*i) == 6) && !std::isdigit(line[(*i)]))
		{
			if (error != 1)
				throw(std::range_error("Error : database not complete"));
			else
				std::cerr << "Error : database not complete" << std::endl;
			error = 2;
		}
		if (error != 2 &&  (*i) == 7 && line[(*i)] != '-')
		{
			if (error != 1)
				throw(std::range_error("Error : date incorrect"));
			else
				std::cerr << "Error : date incorrect" << std::endl;
			error = 2;
		}
		if(error != 2 &&  (*i) == 7)
			month(line, error);
		if(error != 2 &&  ((*i) == 8 || (*i) == 9) && !std::isdigit(line[(*i)]))
		{
			if (error != 1)
				throw(std::range_error("Error : date incorrect"));
			else
				std::cerr << "Error : date incorrect" << std::endl;
			error = 2;
		}
		if (error != 2 &&  (*i) == 9)
			day(line, error);
	}
}

void BitcoinExchange::parsing_value(std::string line, size_t *i, size_t *j)
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
		}
		if ((*i) < line.length() && line[(*i)] == '.' && (*j) == 2)
		{
			throw(std::range_error("Error 3: value database incorrect" + line));
		}
		if((*i) < line.length() && !std::isdigit(line[(*i)]))
			throw(std::range_error("Error 4 : database incorrect"));
	}
}

void BitcoinExchange::year(std::string line, int &i)
{
	int year;

	year = atoi(line.substr(0,4).c_str());
	if (year < 2009)
	{
		if (i == 0)
			throw(std::range_error("Error database: wrong year 1"));
		else
			std::cerr << "Error database: wrong year" << std::endl;
		i = 2;
	}
}

void BitcoinExchange::month(std::string line, int &i)
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
			std::cerr << "Error database: wrong month" << std::endl;
		i = 2;
	}
}

bool BitcoinExchange::IsLeap (int year) {

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

void BitcoinExchange::day(std::string line, int &i)
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
			i = 2;
        }
    }
	return ;
}
