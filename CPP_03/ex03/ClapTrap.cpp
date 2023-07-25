/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:24:11 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/10 22:32:49 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("default"), hit_point(10), energy_points(10), attack_damage(0)
{
	std::cout << "The default constructor has been successfully called to initialize the object. \n";
}

ClapTrap::ClapTrap(std::string username): name(username), hit_point(10), energy_points(10), attack_damage(0)
{
	std::cout << "The constructor has been successfully called to initialize the object. \n";
}

ClapTrap::ClapTrap(const ClapTrap& other): name(other.name), hit_point(10), energy_points(10), attack_damage(0)
{
	std::cout << "The copy constructor has been successfully called to initialize the object. \n";
}

ClapTrap & ClapTrap::operator = (const ClapTrap& other)
{
	std::cout << "operator  Constructor of ClapTrap\n";
	if (this != &other)
	{
		name = other.name;
		hit_point = other.hit_point;
		attack_damage = other.attack_damage;
		energy_points = other.energy_points;

	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hit_point > 0)
	{
		if (this->energy_points > 0)
		{
			this->energy_points = this->energy_points - 1;
			std::cout << "ClapTrap " << this->name<< " attacks "<< target << ", causing 1 points of damage!\n";
		}
		else
			std::cout << "you are out of energy\n";

	}
	else
		std::cout << "i'm dead, How can i attack\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_point > 0)
	{
		if ((unsigned int)this->hit_point >= amount)
			this->hit_point = this->hit_point - amount;
		else
			this->hit_point = 0;
	}
	else
		std::cout << "i'm dead already\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	//est ce qu'on autorise une personne qui a 0 point de vie a se heal ?
	if (this->hit_point == 10)
		std::cout << "i'm at the max\n";
	else if (this->energy_points > 0)
	{
		if ((this->hit_point + amount) > 10)
			this->hit_point = 10;
		else
			this->hit_point = this->hit_point + amount;
		this->energy_points = this->energy_points - 1;
		std::cout << "your hit point has increase by one\n";
	}
	else
		std::cout << "you have no energy\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "The destructor od ClapTrap has been successfully called to destroy the object. \n";
}
