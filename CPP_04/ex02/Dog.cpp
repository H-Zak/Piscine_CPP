/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:48:37 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/18 01:07:19 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "AAnimal.hpp"

Dog::Dog(): AAnimal()
{
	std::cout << "Dog default Constructor called " << std::endl;
	this->type = "Dog";
	this->brain = new Brain("Dog");
}

Dog::Dog(std::string type) : AAnimal(type)
{
	std::cout << "Dog type Constructor called " << std::endl;
	this->type = type;
	this->brain = new Brain("Dog");
}

Dog::Dog (const Dog &other)
{
	std::cout << "Dog copy Constructor called" << std::endl;
	*this = other;
}

Dog & Dog::operator=(const Dog & other)
{
	std::cout << "Contructor operator of Dog is called " << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		this->brain = other.brain;
	}
	return (*this);
}

void Dog::makeSound(void)const
{
	std::cout << "Woof\n";

}

std::string Dog::getType()const
{
	return this->type;
}

Brain* Dog::getBrain()const
{
	return this->brain;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Destructor of Dog is called\n";
}
