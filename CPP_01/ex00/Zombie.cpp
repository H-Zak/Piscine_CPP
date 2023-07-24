/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:58:32 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/24 13:34:18 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "";
	std::cout << "Constructor called" << std::endl;
}


void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string zombie_name)
{
	std::cout << "name Constructor called for " << this->name << std::endl;
	this->name = zombie_name;
}

Zombie::~Zombie()
{
	std::cout << "Destructor of Zombie called" << std::endl;
}
