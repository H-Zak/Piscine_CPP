/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 22:42:33 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/11 13:02:07 by zakariyaham      ###   ########.fr       */
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

void FragTrap::beRepaired(unsigned int amount)
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

void FragTrap::attack(const std::string& target)
{
	if (this->hit_point > 0)
	{
		if (this->energy_points > 0)
		{
			this->energy_points = this->energy_points - 1;
			std::cout << "FragTrap " << this->name<< " attacks "<< target << ", causing 20 points of damage !\n";
		}
		else
			std::cout << "you are out of energy\n";

	}
	else
		std::cout << "i'm dead, How can i attack\n";
}

FragTrap::~FragTrap()
{
	std::cout << "destructof of FragTrap is called \n";
	ClapTrap::~ClapTrap();
}
