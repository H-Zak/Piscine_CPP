/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:50:12 by zheylkoss         #+#    #+#             */
/*   Updated: 2023/08/22 14:32:44 by zhamdouc         ###   ########.fr       */
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

void BitcoinExchange::parsefile(std::string filename)
{
    std::ifstream file(filename);
    std::string line;
	std::ifstream data_file("data.csv");
	std::string parse;
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
		parse = line.substr(0, 10);
        for (size_t i = 0; i < parse.length(); i++)
		{
			if(i < 4 && !std::isdigit(parse[i]))
				throw(std::range_error("Error : date incorrect"));
			if (i == 4 && parse[i] != '-')
				throw(std::range_error("Error : date incorrect"));
			else 
				year(parse);
			if ((i == 5 || i == 6) && !std::isdigit(parse[i]))
				throw(std::range_error("Error : database not complete"));
			if (i == 7 && parse[i] != '-')
				throw(std::range_error("Error : date incorrect"));
			else 
				month(parse);
			if((i == 8 || i == 9) && !std::isdigit(parse[i]))
				throw(std::range_error("Error : date incorrect"));
			if (i == 9)
				day(parse)
		}
    }

}
