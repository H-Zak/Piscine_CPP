/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:50:36 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/24 15:14:46 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"


Fixed::Fixed(void)
{
	this->n = 0;
	std::cout << "Default constructor called" << std::endl;
	return ;
}


Fixed::Fixed(const int n_value)
{
	this->n = 0;
	std::cout << "Int constructor called" << std::endl;
	this->n = n_value * pow(2, fractBits);
	return ;
}

Fixed::Fixed(const float n_value)
{
	this->n = 0;
	std::cout << "Float constructor called" << std::endl;
	this->n =roundf(n_value * pow(2, fractBits));
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

int Fixed::toInt(void) const
{
	return((int)n / (pow(2, fractBits)));
}

float Fixed::toFloat(void) const
{
	return((float)n / (pow(2, fractBits)));
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

/*
La ligne return o; dans la fonction operator<< permet de retourner l'objet std::ostream après avoir effectué l'opération d'écriture.
Cela permet d'enchaîner plusieurs opérations de sortie les unes après les autres.

Lorsqu'on utilise l'opérateur << avec des flux de sortie, comme std::cout, l'opération renvoie une référence vers le flux lui-même.
Cela permet de chaîner plusieurs opérations d'écriture ensemble,
*/
std::ostream & operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}
