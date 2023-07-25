/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:32:33 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/11 13:01:52 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "default Constructor of ScavTrap\n";
	this->hit_point = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "name Constructor of ScavTrap\n";
	this->hit_point = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "copie  Constructor of ScavTrap\n";
}

ScavTrap & ScavTrap::operator =(const ScavTrap& other)
{
	std::cout << "operator  Constructor of ScavTrap\n";
	if (this != &other)
	{
		this->hit_point = other.hit_point;
		this->energy_points = other.attack_damage;
		this->attack_damage = other.energy_points;
	}
	return *this;

}


void ScavTrap::beRepaired(unsigned int amount)
{
	//est ce qu'on autorise une personne qui a 0 point de vie a se heal ?
	if (this->hit_point == 100)
		std::cout << "i'm at the max\n";
	else if (this->energy_points > 0)
	{
		if ((this->hit_point + amount) > 100)
			this->hit_point = 100;
		else
			this->hit_point = this->hit_point + amount;
		this->energy_points = this->energy_points - 1;
		std::cout << "your hit point has increase by one\n";
	}
	else
		std::cout << "you have no energy\n";
}

void ScavTrap::attack(const std::string& target)
{
	if (this->hit_point > 0)
	{
		if (this->energy_points > 0)
		{
			this->energy_points = this->energy_points - 1;
			std::cout << "ScavTrap " << this->name<< " attacks "<< target << ", causing 20 points of damage !\n";
		}
		else
			std::cout << "you are out of energy\n";

	}
	else
		std::cout << "i'm dead, How can i attack\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap has entered Gate keeper mode\n";
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "The destructor of ScavTrap has been successfully called to destroy the object. " << this->name << std::endl ;
	//detruit d'abord ce que j'ai cree dedans
	ClapTrap::~ClapTrap();
}
