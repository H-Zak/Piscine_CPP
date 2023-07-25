/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:44:22 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/25 14:54:44 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << "Test 1 :" << std::endl;
	ClapTrap	test1("Bob");
    
	test1.attack("Bill");
	test1.attack("Bill");
	test1.attack("Bill");
	test1.attack("Bill");
	test1.attack("Bill");
	test1.attack("Bill");
	test1.attack("Bill");
	test1.attack("Bill");
	test1.attack("Bill");
	test1.attack("Bill");
	test1.attack("Bill");

    std::cout << std::endl;
	std::cout << "Test 2 : with the copy constructor\n" << std::endl;
	ClapTrap	test2(test1);

	test2.attack("Bill");
	test2.beRepaired(1);
	test2.takeDamage(7);
	test2.beRepaired(8);
	test2.takeDamage(18);
    
    std::cout << std::endl;
	std::cout << "Test 3 : with the copy and the assignement operator" << std::endl;
	ClapTrap	test3;
	ClapTrap	test4("Foo");

	test3 = test4;
	std::cout << std::endl;
	test3.attack("Bill");
	test3.beRepaired(1);
	test3.takeDamage(7);
	test3.beRepaired(8);
	test3.beRepaired(2147483646);
	test3.takeDamage(18);
    
	return (0);
}