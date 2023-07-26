/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:44:22 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/26 15:58:17 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

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

	std::cout << std::endl;

	FragTrap	test3("Boo");

	test3.attack("Foo");
    test3.takeDamage(3);
	test3.beRepaired(2);
	test3.highFivesGuys();

	std::cout << std::endl;

	DiamondTrap	test4("Bar");

	test4.attack("Boo");
    test4.takeDamage(3);
	test4.beRepaired(2);
	test4.whoAmI();

	return (0);
}
