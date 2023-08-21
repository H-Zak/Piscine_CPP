/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zheylkoss <zheylkoss@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:50:12 by zheylkoss         #+#    #+#             */
/*   Updated: 2023/08/22 00:56:25 by zheylkoss        ###   ########.fr       */
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

    if(!file.is_open())
        throw(std::range_error("problem with input"));
    if(!data_file.is_open())
        throw(std::range_error("problem with input"));
    std::getline(data_file, line);
    if ( line.compare("date,exchange_rate"))
        throw(std::range_error("Error : first line data_file"));
    while(std::getline(data_file, line))
    {
        
    }
    
}
