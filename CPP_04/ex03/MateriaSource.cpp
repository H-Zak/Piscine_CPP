/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 23:24:36 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/26 18:52:06 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource();
{
	std::cout << "default Constructor of MateriaSource is called\n";
	for(int i = 0; i < 4; i++)
		this->Materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other) : IMateriaSource(other)
{
	std::cout << "copy Constructor of MateriaSource is called\n";
	*this = other;
	for(int i = 0; i < 4; i++)
		this->Materia[i] = other.Materia[i]->clone();
}

MateriaSource & MateriaSource::operator=(const MateriaSource &other)
{
	std::cout << "copy operator Constructor of MateriaSource is called\n";
	if (this != &other)
	{
		for (int i = 0 ; i < 4; i++)
		{
			if (this->Materia[i])
			{
				delete this->Materia[i];
				Materia[i] = NULL;
			}
			if (other.Materia[i])
				this->Materia[i] = other.Materia[i]->clone();
		}
	}
	*this = other;
	return *this;
}

AMateria* MateriaSource::createMateria(std::string const & type);
{
	int i = 0;

	if (this->Materia[i])
	{
		for ( ; i < 4 && this->Materia[i]; i++)

	}
	if (i < 4)
}

void MateriaSource::learnMateria(AMateria* other);
{
	int i = 0;
	if (this->Materia[i])
	{
		for ( ; i < 4 && this->Materia[i]; i++)

	}
	if (i < 4)
		this->Materia[i] = other;

}

MateriaSource::~MateriaSource()
{
	std::cout << "Destructor of MateriaSource is called\n";
	for (int i = 0 ; i < 4; i++)
		delete this->inventory[i];
}
