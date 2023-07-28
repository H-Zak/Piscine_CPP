/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:52:10 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/28 14:08:09 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default Constructor called " << std::endl;
	this->type = "";
}

Animal::Animal(std::string type)
{
	std::cout << "Animal type Constructor called " << std::endl;
	this->type = type;
}

Animal::Animal (const Animal &other)
{
	std::cout << "Animal copy Constructor called" << std::endl;
	*this = other;

}

Animal & Animal::operator=(const Animal & other)
{
	std::cout << "Contructor operator of animal is called " << std::endl;
	if (this != &other)
		this->type = other.getType();
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << "Animal default sound\n";

}

std::string Animal::getType() const
{
	return this->type;
}

Animal::~Animal()
{
	std::cout << "Destructor of Animal is called\n";
}
