/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:32:33 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/26 16:21:39 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "default Constructor of ScavTrap called \n";
	this->hit_point = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "name Constructor of ScavTrap called\n";
	this->hit_point = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "copie  Constructor of ScavTrap called\n";
}

ScavTrap & ScavTrap::operator =(const ScavTrap& other)
{
	std::cout << "operator Constructor of ScavTrap called\n";
	if (this != &other)
	{
		this->hit_point = other.hit_point;
		this->energy_points = other.attack_damage;
		this->attack_damage = other.energy_points;
	}
	return *this;

}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap default destructor called for " << this->name << std::endl ;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->hit_point > 0)
	{
		if (this->energy_points > 0)
		{
			this->energy_points = this->energy_points - 1;
			std::cout << "ScavTrap " << this->name << " attacks "<< target << ", causing 20 points of damage!\n";
			std::cout << "ScavTrap " << this->name << " Energy point : " << this->energy_points << " || Hit point :" << this->hit_point << std::endl;
		}
		else
			std::cout << "ScavTrap " << this->name << " Energy point : " << this->energy_points << " => you are out of energy\n";

	}
	else
		std::cout << "ScavTrap " << this->name << " i'm dead, How can i attack\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap has entered Gate keeper mode\n";
	return ;
}
