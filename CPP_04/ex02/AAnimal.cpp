/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:52:10 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/17 22:11:11 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal default Constructor called " << std::endl;
	this->type = " ";
}

AAnimal::AAnimal(std::string type)
{
	std::cout << "AAnimal type Constructor called " << std::endl;
	this->type = type;
}

AAnimal::AAnimal (const AAnimal &other) : type(other.type)
{
	std::cout << "AAnimal copy Constructor called" << std::endl;

}

AAnimal & AAnimal::operator=(const AAnimal & other)
{
	std::cout << "Contructor operator of AAnimal is called " << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void AAnimal::makeSound(void) const
{
	std::cout << "AAnimal default sound\n";

}

std::string AAnimal::getType() const
{
	return this->type;
}

AAnimal::~AAnimal()
{
	std::cout << "Destructor of AAnimal is called\n";
}
