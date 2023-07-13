/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 02:31:16 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/11 16:02:04 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap(), name("default")
{
	std::cout << "default DiamondTrap contructor called\n";
	this->hit_point = FragTrap::hit_point;
	this->attack_damage = FragTrap::attack_damage;
	this->energy_points = ScavTrap::energy_points;

}

DiamondTrap::DiamondTrap(std::string username ) : ClapTrap(username + "_clap_name"), FragTrap(), ScavTrap(), name(username)
{
	std::cout << "default DiamondTrap contructor called\n";
	this->hit_point = FragTrap::hit_point;
	this->attack_damage = FragTrap::attack_damage;
	this->energy_points = ScavTrap::energy_points;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
	std::cout << "copy constructor of Dimaond\n";
	this->name = other.name; //pour la classe prive de Diamond Name
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap& other)
{
	ClapTrap::operator=(other);
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "destructor of DiamondTrapp called\n";
	// ClapTrap::~ClapTrap();
	// FragTrap::~FragStrap();
	// ScavTrap::~ScavTrap();
}
