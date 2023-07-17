/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:52:10 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/17 19:55:01 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default Constructor called " << std::endl;
	this->type = " ";
}

Animal::Animal(std::string type)
{
	std::cout << "Animal type Constructor called " << std::endl;
	this->type = type;
}

Animal::Animal (const Animal &other) : type(other.type)
{
	std::cout << "Animal copy Constructor called" << std::endl;

}

Animal & Animal::operator=(const Animal & other)
{
	std::cout << "Contructor operator of animal is called " << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << "Animal default sound\n";

}

std::string Animal::getType()
{
	return this->type;
}

Animal::~Animal()
{
	std::cout << "Destructor of Animal is called\n";
}
