/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 02:31:16 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/11 03:52:53 by zakariyaham      ###   ########.fr       */
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
	this->FragTrap::hit_point = 100;
	this->FragTrap::attack_damage = 30;
	this->ScavTrap::energy_points = 100;

}

DiamondTrap::DiamondTrap(std::string username ) : ClapTrap(username + "_clap_name"), FragTrap(), ScavTrap(), name(username)
{
	std::cout << "default DiamondTrap contructor called\n";
	this->FragTrap::hit_point = 100;
	this->FragTrap::attack_damage = 30;
	this->ScavTrap::energy_points = 100;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), FragTrap(), ScavTrap(other)
{
	std::cout << "copy constructor of Dimaond\n";
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
