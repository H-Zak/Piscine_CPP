/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilc.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 00:07:54 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/28 00:09:58 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void year(std::string line, int &i)
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

void month(std::string line, int &i)
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

void day(std::string line, int &i)
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
