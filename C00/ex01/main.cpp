/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:19:00 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/06/22 14:29:16 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

int main ()
{
	Phonebook phonebook;
	std::string command;
	
	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT) :\n";
		if (!std::getline(std::cin, command))
			break;
		if (command == "ADD" || command == "add")
		{
			std::string  firstname, lastname, nickname, phonenumber, darkestsecret;
			
			std::cout << "Enter the first name :\n";
			if (!std::getline(std::cin, firstname))
				break ;
			std::cout << "Enter the last name :\n";
			if (!std::getline(std::cin, lastname))
				break;
			std::cout << "Enter the nick name :\n";
			if (!std::getline(std::cin, nickname))
				break; 
			std::cout << "Enter the phone number :\n";
			if (!std::getline(std::cin, phonenumber))
				break; 
			std::cout << "Enter the darkest secret :\n";
			if (!std::getline(std::cin, darkestsecret))
				break; 

			phonebook.addcontact(firstname, lastname, nickname, phonenumber, darkestsecret);
		}
		else if (command == "SEARCH" || command == "search")
		{
			phonebook.searchcontact();
		}
		else if (command == "EXIT" || command == "exit")
		{
			break;
		}
		else
			std::cout << "command incorrect, try again\n";
		
	}
	return (0);
}