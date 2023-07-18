/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:45:54 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/18 03:27:53 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "default Constructor of Ice is called\n";
}

Ice::Ice(std::string const & type) : AMateria(type)
{
	std::cout << "name Constructor of Ice is called\n";
	this->type = type;
}

Ice::Ice(const Ice &other) : AMateria(other)
{
	std::cout << "copy Constructor of Ice is called\n";
	*this = other;
}

Ice & Ice::operator=(const Ice &other)
{
	std::cout << "copy operator Constructor of Ice is called\n";
	if (this != &other)
		this->type = other.type;
	return *this;
}


AMateria* Ice::clone ()const
{
	return (new  Ice(*this));
}

Ice::~Ice()
{
	std::cout << "Destructor of Ice is called\n";
	return ;
}
