/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:45:54 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/27 15:30:50 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("ice")
{
	// std::cout << "default Constructor of Ice is called\n";
}

Ice::Ice(std::string const & type) : AMateria(type)
{
	// std::cout << "name Constructor of Ice is called\n";
	this->type = type;
}

Ice::Ice(const Ice &other) : AMateria(other)
{
	// std::cout << "copy Constructor of Ice is called\n";
	*this = other;
}

Ice & Ice::operator=(const Ice &other)
{
	// std::cout << "copy operator Constructor of Ice is called\n";
	if (this != &other)
		this->type = other.getType();
	return *this;
}

void Ice::use( ICharacter& target ) 
{

    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    return ;
}

AMateria* Ice::clone ()const
{
	return (new  Ice(*this));
}

Ice::~Ice()
{
	// std::cout << "Destructor of Ice is called\n";
	return ;
}
