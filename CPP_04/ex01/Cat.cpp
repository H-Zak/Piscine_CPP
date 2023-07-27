/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:47:57 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/27 17:10:51 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat default Constructor called " << std::endl;
	this->Animal::type = "Cat";
	brain = new Brain("Cat");
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat type Constructor called " << std::endl;
	brain = new Brain("Cat");
}

Cat::Cat (const Cat &other)
{
	std::cout << "Cat copy Constructor called" << std::endl;
	*this = other;
}

Cat & Cat::operator=(const Cat & other)
{
	std::cout << "Contructor operator of Cat is called " << std::endl;
	if (this != &other)
	{
		this->type = other.getType();
		this->brain = other.getBrain();
	}
	return (*this);
}

void Cat::makeSound(void)const
{
	std::cout << "Meow\n";

}

Brain* Cat::getBrain()const
{
	return this->brain;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Destructor of Cat is called\n";
}
