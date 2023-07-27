/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:48:37 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/27 17:10:58 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog default Constructor called " << std::endl;
	this->Animal::type = "Dog";
	this->brain = new Brain("Dog");
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog type Constructor called " << std::endl;
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
		this->type = other.getType();
		this->brain = other.getBrain();
	}
	return (*this);
}

void Dog::makeSound(void)const
{
	std::cout << "Woof\n";
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
