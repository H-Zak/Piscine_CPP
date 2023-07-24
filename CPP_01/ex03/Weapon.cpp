/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 22:40:25 by zheylkoss         #+#    #+#             */
/*   Updated: 2023/07/24 14:29:14 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon()
{	
	this->type = "";
	std::cout << "default Weapon constructor called\n";
}


std::string Weapon::getType() const
{
    return this->type;;
}

void    Weapon::setType(std::string value)
{
    this->type = value;
}

Weapon::~Weapon()
{
    std::cout << "Weapon Destructor called\n";
}