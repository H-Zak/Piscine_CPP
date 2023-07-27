/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 01:57:52 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/27 15:32:19 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria()
{
	// std::cout << "default Constructor of AMateria is called\n";
	this->type = "";
}

AMateria::AMateria(std::string const & type)
{
	// std::cout << "name Constructor of AMateria is called\n";
	this->type = type;
}

AMateria::AMateria(const AMateria &other)
{
	// std::cout << "copy Constructor of AMateria is called\n";
	*this = other;
}

AMateria & AMateria::operator=(const AMateria &other)
{
	// std::cout << "copy operator Constructor of AMateria is called\n";
	if (this != &other)
		this->type = other.type;
	return *this;
}

std::string const & AMateria::getType(void)const
{
	return this->type;
}

AMateria::~AMateria()
{
	// std::cout << "Destructor of AMateria is called\n";
}

void AMateria::use( ICharacter& target ) 
{

    std::cout << "* AMateria use function called with * " << target.getName() << " target" << std::endl;
    return ;
}