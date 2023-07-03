/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zheylkoss <zheylkoss@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 22:40:25 by zheylkoss         #+#    #+#             */
/*   Updated: 2023/07/03 23:56:02 by zheylkoss        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(){
    
}

Weapon::~Weapon(){
    
}

std::string &Weapon::getType()
{
    std::string &type_copy = this->type;

    return type_copy;
}

void    Weapon::setType(std::string value)
{
    this->type = value;
}