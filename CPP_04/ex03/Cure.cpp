/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:44:34 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/27 15:34:35 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

#include <iostream>
#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure() : AMateria("cure")
{
	// std::cout << "default Constructor of Cure is called\n";
}

Cure::Cure(std::string const & type) : AMateria(type)
{
	// std::cout << "name Constructor of Cure is called\n";
	this->type = type;
}

Cure::Cure(const Cure &other) : AMateria(other)
{
	// std::cout << "copy Constructor of Cure is called\n";
	*this = other;
}

Cure & Cure::operator=(const Cure &other)
{
	// std::cout << "copy operator Constructor of Cure is called\n";
	if (this != &other)
		this->type = other.getType();
	return *this;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    return ;
}

AMateria* Cure::clone ()const
{
	return (new  Cure(*this));
}

Cure::~Cure()
{
	// std::cout << "Destructor of Cure is called\n";
	return ;
}
