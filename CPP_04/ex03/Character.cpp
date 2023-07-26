/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:26:34 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/26 18:49:43 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Character::Character() : ICharacter()
{
	std::cout << "default Constructor of Character is called\n";
	this->name = "unknow";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string const & name) : ICharacter()
{
	std::cout << "name Constructor of Character is called\n";
	this->name = name ;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character &other) : ICharacter()
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
				this->inventory[i] = NULL;
			}
			if (other.inventory[i])
				this->inventory[i] = other.inventory[i]->clone();
		}
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
