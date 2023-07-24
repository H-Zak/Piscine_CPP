/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:50:36 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/24 15:14:36 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"


Fixed::Fixed()
{
	this->n = 0;
	std::cout << "Default constructor called" << std::endl;

	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

Fixed::Fixed( const Fixed & original)
{
	std::cout << "copy constructor called" << std::endl;
	*this = original;

	return ;
}

Fixed & Fixed::operator=(const Fixed& original)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &original)
		setRawBits(original.getRawBits());
	return *this;
}


void Fixed::setRawBits(int const raw)
{
	this->n = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getrawBits member function called" << std::endl;
	return this->n;
}
