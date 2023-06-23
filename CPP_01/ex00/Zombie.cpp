/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:58:32 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/06/23 17:42:44 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie* Zombie::newZombie( std::string name )
{
	Zombie *zombie_1;
	zombie_1 = new Zombie();
	this->zombie_name = name;
	if (this->zombie_name.compare("Foo") == 0)
		std::cout << this->zombie_name;
	else
		std::cout << "<" << this->zombie_name << ">";
	Zombie::announce();
	return	zombie_1;
}

void Zombie::announce(void)
{
	std::cout << ": BraiiiiiiinnnzzzZ...";
}