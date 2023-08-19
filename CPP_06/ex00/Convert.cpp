/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:58:17 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/16 19:00:17 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert( void )
{
    // std::cout << "Convert default constructor called" << std::endl;
    return ;
}

Convert::Convert( char *av )
{
    // std::cout << "Convert default constructor called" << std::endl;
    this->_nb = atof(av);
    return ;
}

Convert::Convert( Convert const &other )
{
	// std::cout << "Convert copy constructor called" << std::endl;
    *this = other;
}

Convert::~Convert() {

    // std::cout << "Convert default destructor called" << std::endl;
}

Convert & Convert::operator=( Convert const &a ) {

    this->_nb = a.getNb();
	return ( *this );
}

double Convert::getNb() const {

    return (this->_nb);
}

void    Convert::convertChar() const {

    if (!(this->_nb >= 0 && this->_nb <= 127))
        std::cout << "char: impossible" << std::endl;
    else if (!(std::isprint(this->_nb)))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << "'" << static_cast<char>(this->_nb) << "'" << std::endl;
}

void    Convert::convertInt() const {
    if (std::isfinite(_nb) && _nb > INT_MIN && _nb < INT_MAX)
        std::cout << "int: " << static_cast<int>(this->_nb) << std::endl;
    else
        std::cout << "int: impossible" << std::endl;
}

void    Convert::convertFloat() const {

    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(this->getNb()) << "f" << std::endl;
}

void    Convert::convertDouble() const {

    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(this->getNb()) << std::endl;

}
