/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zheylkoss <zheylkoss@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:53:33 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/03 22:31:13 by zheylkoss        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string string_init = "HI THIS IS BRAIN";
	std::string* stringPTR;
	std::string &stringREF = string_init;
	
	stringPTR = &string_init;
	std::cout << "l'adresse de string_init : " << &string_init << std::endl;
	std::cout << "l'adresse de stringPTR : " << &stringPTR << std::endl;
	std::cout << "l'adresse dans stringPTR : " << stringPTR << std::endl;
	std::cout << "l'adresse de stringREF : " << &stringREF << std::endl;

	std::cout << "valeur de string_init : " << string_init << std::endl;
	std::cout << "valeur de stringPTR : " << *stringPTR << std::endl;
	std::cout << "valeur de stringREF : " << stringREF << std::endl;
	
}