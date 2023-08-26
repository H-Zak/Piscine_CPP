/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExxchange_utils.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:01:21 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/08/26 18:50:02 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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

void BitcoinExchange::parsing_date(std::string line , size_t *i, int &error)
{
	for (; (*i) < 10; (*i)++)
	{
		if((*i) < 4 && !std::isdigit(line[(*i)]))
		{
			if (error == 1 )
				throw(std::range_error("Error : date incorrect"));
			else
				std::cerr << "Error : date incorrect" << std::endl;
			error = 2;
		}
		if (error != 2 && (*i) == 4 && line[(*i)] != '-')
		{
			if (error == 1)	
				throw(std::range_error("Error : date incorrect"));
			else
				std::cerr << "Error : date incorrect" << std::endl;
			error = 2;
		}
		if(error != 2 && (*i) == 4) 
			year(line, error);
		if (error != 2 && ((*i) == 5 || (*i) == 6) && !std::isdigit(line[(*i)]))
		{
			if (error == 1)
				throw(std::range_error("Error : database not complete"));
			else
				std::cerr << "Error : database not complete" << std::endl;
			error = 2;
		}
		if (error != 2 &&  (*i) == 7 && line[(*i)] != '-')
		{
			if (error == 1)
				throw(std::range_error("Error : date incorrect"));
			else
				std::cerr << "Error : date incorrect" << std::endl;
			error = 2;
		}
		if(error != 2 &&  (*i) == 7)
			month(line, error);
		if(error != 2 &&  ((*i) == 8 || (*i) == 9) && !std::isdigit(line[(*i)]))
		{
			if (error == 1)
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