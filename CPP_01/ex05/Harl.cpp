/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:57:10 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/22 17:47:21 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"


void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !\n";
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\n";
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
	void (Harl::*fonctionPtr[])() =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	std::string fonction_lvl[4]=
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};
	for(int i = 0; i < 4; i++)
	{
		if (level == fonction_lvl[i])
		{
			(this->*fonctionPtr[i])();
			return ;
		}
	}
	return ;
	
}