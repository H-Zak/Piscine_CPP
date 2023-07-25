/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:24:11 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/25 16:59:02 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("default"), hit_point(10), energy_points(10), attack_damage(0)
{
	std::cout << "The default constructor ClapTrap has been successfully called to initialize the object. \n";
}

ClapTrap::ClapTrap(std::string username): name(username), hit_point(10), energy_points(10), attack_damage(0)
{
	std::cout << "The named constructor ClapTrap has been successfully called to initialize the object. \n";
}

ClapTrap::ClapTrap(const ClapTrap& other): name(other.name), hit_point(10), energy_points(10), attack_damage(0)
{
	std::cout << "The copy constructor ClapTrap has been successfully called to initialize the object. \n";
}

ClapTrap & ClapTrap::operator = (const ClapTrap& other)
{
	std::cout << "The copy operator constructor ClapTrap has been successfully called to initialize the object. \n";
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
			std::cout << "ClapTrap " << this->name << " attacks "<< target << ", causing 0 points of damage!\n";
			std::cout << "ClapTrap " << this->name << " Energy point : " << this->energy_points << " || Hit point :" << this->hit_point << std::endl;
		}
		else
			std::cout << "ClapTrap " << this->name << " Energy point : " << this->energy_points << " => you are out of energy\n";

	}
	else
		std::cout << "ClapTrap " << this->name << " i'm dead, How can i attack\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_point > 0)
	{
		if (this->hit_point >= amount)
		{
			this->hit_point = this->hit_point - amount;
			std::cout << "ClapTrap " << this->name << " lost " << amount << " hit point || Hit points : " << this->hit_point << std::endl;
		}
		else
			this->hit_point = 0;
	}
	else
		std::cout << "ClapTrap " << this->name << " i'm dead already\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	//est ce qu'on autorise une personne qui a 0 point de vie a se heal ?
	if (this->hit_point == 10)
		std::cout << "ClapTrap " << this->name << " Hit point :" << this->hit_point << " => i'm at the maximum already\n";
	else if (this->energy_points > 0)
	{
		if ((this->hit_point + amount) > 10)
			this->hit_point = 10;
		else
			this->hit_point = this->hit_point + amount;
		this->energy_points = this->energy_points - 1;
		std::cout << "ClapTrap " << this->name << " your hit point has increase  || Hit point : " << this->hit_point << std::endl;
	}
	else
		std::cout  << "Energy point : " << this->energy_points << " => you have no energy left\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "The destructor ClapTrap has been successfully called to destroy the object. \n";
}

