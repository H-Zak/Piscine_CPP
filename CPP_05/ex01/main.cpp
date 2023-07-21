/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 03:34:42 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/21 16:44:01 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <stdexcept>
#include <fstream>
#include <iostream>

int main()
{

    try
	{
		Form	form1("N01", 0, 1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Form	form2("N02", 1, 0);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Form	form3("N03", 1, 151);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Form	form4("N04", 151, 1);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat		bureau1("Bill", 1);
		Form			form5("N05", 150, 150);

		std::cout << form5 << std::endl;
		bureau1.signForm(form5);
		std::cout << form5 << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	try
	{
		Bureaucrat		bureau2("Foo", 10);
		Form			form6("N06", 1, 1);

		std::cout << form6 << std::endl;
		bureau2.signForm(form6);
		std::cout << form6 << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
