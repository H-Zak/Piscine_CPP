/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 22:42:33 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/26 16:22:44 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default Constructor of FragTrap\n";
	this->hit_point = 100;
	this->attack_damage = 30;
	this->energy_points = 100;
}

FragTrap::FragTrap(std::string username) : ClapTrap(username)
{
	std::cout << "named Constructor of FragTrap\n";
	this->hit_point = 100;
	this->attack_damage = 30;
	this->energy_points = 100;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "copy constructor Fragtrap called on" << other.name << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap& other)
{
	std::cout << "";
	if (this != &other)
	{
		this->hit_point = 100;
		this->attack_damage = 30;
		this->energy_points = 100;
	}
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "are you okay for a High fives ?\n";
}

void FragTrap::attack(const std::string& target)
{
	if (this->hit_point > 0)
	{
		if (this->energy_points > 0)
		{
			this->energy_points = this->energy_points - 1;
			std::cout << "FragTrap " << this->name << " attacks "<< target << ", causing 20 points of damage!\n";
			std::cout << "FragTrap " << this->name << " Energy point : " << this->energy_points << " || Hit point :" << this->hit_point << std::endl;
		}
		else
			std::cout << "FragTrap " << this->name << " Energy point : " << this->energy_points << " => you are out of energy\n";

	}
	else
		std::cout << "FragTrap " << this->name << " i'm dead, How can i attack\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap default destructor called for " << this->name << std::endl;
}