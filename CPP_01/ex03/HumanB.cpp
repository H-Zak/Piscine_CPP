/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 22:40:14 by zheylkoss         #+#    #+#             */
/*   Updated: 2023/07/22 14:10:48 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string value): name(value), weapon(NULL)
{
	std::cout << "HumanB constructor called\n";
}

HumanB::~HumanB ()
{
	std::cout << "HumanB destructor called\n";

}

void HumanB::setWeapon(Weapon &value)
{
    this->weapon = &value;
}

void HumanB::attack()
{
    if (weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " has no weapon" << std::endl;
}
