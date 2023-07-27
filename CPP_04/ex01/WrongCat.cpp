/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:45:12 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/27 16:45:58 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "default Contructor of WrongCat\n";
	this->WrongAnimal::type = "WrongCat"
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "type Contructor of WrongCat\n";
}

WrongCat::WrongCat(const WrongCat & other)
{
	std::cout << "copy Contructor of WrongCat\n";
	*this = other;
}

WrongCat & WrongCat::operator=(const WrongCat &other)
{
	std::cout << "operator copy Contructor of WrongCat\n";
	if (this != &other)
		this->type = other.getType();
	return *this;
}

std::string WrongCat::getType()const
{
	return this->type;
}

void WrongCat::makeSound() const
{
	std::cout << "default WrongCat sound" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "destructor of WrongCat sound" << std::endl;

}
