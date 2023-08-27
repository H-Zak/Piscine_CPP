/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExxchange_utils.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:01:21 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/08/28 00:16:57 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"



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
