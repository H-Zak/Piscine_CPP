/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 03:34:42 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/23 18:56:26 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <stdexcept>

int main()
{
	Bureaucrat M;

    try {

        Bureaucrat  test1("Bob", 1);
        std::cout << test1 << std::endl;

        test1.lowerGrade();
        std::cout << test1 << std::endl;

        test1.upGrade();
        std::cout << test1 << std::endl;

        test1.upGrade();
        std::cout << test1 << std::endl;

    } catch(const std::exception & e) {
        std::cerr << e.what() << std::endl;
    };
    std::cout << std::endl;

    try {

		Bureaucrat  test2("Bill", 150);
		std::cout << test2 << std::endl;

		test2.upGrade();
		std::cout << test2 << std::endl;

		test2.lowerGrade();
		std::cout << test2 << std::endl;

		test2.lowerGrade();
		std::cout << test2 << std::endl;

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

    try {

		Bureaucrat	test3("Foo", 1);
        std::cout << test3 << std::endl;

		test3.upGrade();
		std::cout << test3 << std::endl;

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}
