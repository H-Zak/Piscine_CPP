/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:26:34 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/18 20:43:57 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"


Character::Character() : ICharacter();
{
	std::cout << "default Constructor of Character is called\n";
	this->name = "unknow";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
}

Character::Character(std::string const & name) : ICharacter();
{
	std::cout << "name Constructor of Character is called\n";
	this->name = name ;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
}

Character::Character(const Character &other) : ICharacter();
{
	std::cout << "copy Constructor of Character is called\n";
	this->name = other.name;
	for (int i = 0; i < 4; i++)
			this->inventory[i] = other.inventory[i]->clone();
	*this = other;
}

Character & Character::operator=(const Character &other)
{
	std::cout << "copy operator Constructor of Character is called\n";
	if (this != &other)
	{
		this->name = other.name;
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
			{
				delete this->inventory[i];
				this->inventory[i] = nullptr;
			}
			if (other.inventory[i])
				this->inventory[i] = other.inventory[i]->clone();
		}
			this->inventory[i] = other.inventory[i];
	}
	return *this;
}

std::string const & Character::getName(void)const
{
	return this->name;
}

Character::~Character()
{
	std::cout << "Destructor of Character is called\n";
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];

}
