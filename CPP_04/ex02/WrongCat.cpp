/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrongcat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:45:12 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/17 22:12:50 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "default Contructor of WrongCat\n";
}

WrongCat::WrongCat(std::string type)
{
	std::cout << "type Contructor of WrongCat\n";
	this->type = type;
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
		this->type = other.type;
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
