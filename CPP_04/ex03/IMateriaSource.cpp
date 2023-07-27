/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:25:59 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/27 14:47:40 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource( void ) {
    
    // std::cout << VIOLET << "IMateriaSource default constructor called" << NC << std::endl;    
    return ;
}

IMateriaSource::IMateriaSource( IMateriaSource const &other ) {

	// std::cout  << VIOLET << "IMateriaSource copy constructor called" << NC << std::endl;
	*this = other;
}

IMateriaSource::~IMateriaSource() {
    
    // std::cout  << VIOLET << "IMateriaSource default destructor called" << NC << std::endl;
    return ;
}

IMateriaSource & IMateriaSource::operator=( IMateriaSource const &a ) {

    // std::cout  << VIOLET << "IMateriaSource assignment operator called" << NC << std::endl;
    (void)a;
	return ( *this );
}