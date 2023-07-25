/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:44:22 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/25 16:43:06 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	test1("Bob");

    test1.attack("Foo");
    test1.takeDamage(3);
	test1.beRepaired(2);

	std::cout << std::endl;
	
	ScavTrap	test2("Foo");
	
	test2.attack("Bob");
    test2.takeDamage(3);
	test2.beRepaired(2);
	test2.guardGate();
	
	return (0);
}
