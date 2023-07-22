/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 22:40:17 by zheylkoss         #+#    #+#             */
/*   Updated: 2023/07/22 13:54:56 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"


HumanA::HumanA (std::string name, Weapon &Weapon_adress) : name(name), weapon(&Weapon_adress)
{
	std::cout << "Human A Constructor called" << std::endl;
}

HumanA::~HumanA ()
{
	std::cout << "Human A Destructor called" << std::endl;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    
}