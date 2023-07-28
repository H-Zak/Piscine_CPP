/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:47:57 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/28 15:21:07 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

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
		this->type = other.getType();
		if (brain)
			delete brain;
		this->brain = new Brain(*other.getBrain());
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
