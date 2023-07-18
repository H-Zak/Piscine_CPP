/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:44:34 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/18 03:28:03 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

#include <iostream>
#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure() : AMateria("Cure")
{
	std::cout << "default Constructor of Cure is called\n";
}

Cure::Cure(std::string const & type) : AMateria(type)
{
	std::cout << "name Constructor of Cure is called\n";
	this->type = type;
}

Cure::Cure(const Cure &other) : AMateria(other)
{
	std::cout << "copy Constructor of Cure is called\n";
	*this = other;
}

Cure & Cure::operator=(const Cure &other)
{
	std::cout << "copy operator Constructor of Cure is called\n";
	if (this != &other)
		this->type = other.type;
	return *this;
}


AMateria* Cure::clone ()const
{
	return (new  Cure(*this));
}

Cure::~Cure()
{
	std::cout << "Destructor of Cure is called\n";
	return ;
}
