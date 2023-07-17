/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:47:57 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/17 19:50:04 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat default Constructor called " << std::endl;
	this->Animal::type = "Cat";
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat type Constructor called " << std::endl;
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
		this->type = other.type;
	return (*this);
}

void Cat::makeSound(void)const
{
	std::cout << "Meow\n";

}

Cat::~Cat()
{
	std::cout << "Destructor of Cat is called\n";
}
