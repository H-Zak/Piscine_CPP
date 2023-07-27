/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:47:57 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/27 17:12:05 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "AAnimal.hpp"

Cat::Cat(void) : AAnimal()
{
	std::cout << "Cat default Constructor called " << std::endl;
	this->AAnimal::type = "Cat";
	brain = new Brain("Cat");
}

Cat::Cat(std::string type) : AAnimal(type)
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
		this->type = other.type;
		this->brain = other.brain;
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
