/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zheylkoss <zheylkoss@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 22:40:14 by zheylkoss         #+#    #+#             */
/*   Updated: 2023/07/03 23:52:29 by zheylkoss        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"


HumanB::~HumanB (){
    
}

void HumanB::setWeapon(Weapon *value)
{
    this->weapon = value;
}

void HumanB::attack()
{
    if (weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " has no weapon" << std::endl;
}