/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:50:12 by zheylkoss         #+#    #+#             */
/*   Updated: 2023/08/23 19:42:30 by zhamdouc         ###   ########.fr       */
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

void year(std::string line)
{
	int year;

	year = atoi(line.substr(0,4).c_str());
	if (year < 2009)
		throw(std::range_error("Error database: wrong year"));
}

void month(std::string line)
{
	int month;

	month = atoi(line.substr(5,7).c_str());
	if (month > 0 && month < 13)
		return ;
	else
		throw(std::range_error("Error database: wrong month"));
}

void day(std::string line)
{
	int day;
	int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int month;

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
            throw(std::range_error("Error database: wrong day"));
        }
    }
	return ;
}

void parsing_date(std::string line , size_t *i)
{
	for (; (*i) < 10; (*i)++)
	{
		if((*i) < 4 && !std::isdigit(line[(*i)]))
			throw(std::range_error("Error : date incorrect"));
		if ((*i) == 4 && line[(*i)] != '-')
			throw(std::range_error("Error : date incorrect"));
		if((*i) == 4) 
			year(line);
		if (((*i) == 5 || (*i) == 6) && !std::isdigit(line[(*i)]))
			throw(std::range_error("Error : database not complete"));
		if ((*i) == 7 && line[(*i)] != '-')
			throw(std::range_error("Error : date incorrect"));
		if((*i) == 7) 
			month(line);
		if(((*i) == 8 || (*i) == 9) && !std::isdigit(line[(*i)]))
			throw(std::range_error("Error : date incorrect"));
		if ((*i) == 9)
			day(line);
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
		parsing_date(line, &i);
		if(i == 10 && line[i] != ',')
			throw(std::range_error("Error : sepr database incorrect"));
		else
			i++;
		parsing_value(line, &i, &j);
		i = 0;
		j = 0;
		nb_line++;
		//std::cout << nb_line <<std::endl;
    }
	file.close();

}

void BitcoinExchange::calcul (std::string filename)
{
	std::cout << filename;
	
}