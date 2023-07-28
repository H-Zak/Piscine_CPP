/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:28:07 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/28 14:10:27 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "default Contructor of WrongAnimal\n";
	this->type = "";
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "type Contructor of WrongAnimal\n";
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal & other)
{
	std::cout << "copy Contructor of WrongAnimal\n";
	*this = other;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "operator copy Contructor of WrongAnimal\n";
	if (this != &other)
		this->type = other.getType();
	return *this;
}

std::string WrongAnimal::getType()const
{
	return this->type;
}

void WrongAnimal::makeSound()const
{
	std::cout << "default WrongAnimal sound" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "destructor WrongAnimal sound" << std::endl;

}
