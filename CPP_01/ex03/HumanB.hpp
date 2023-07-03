/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zheylkoss <zheylkoss@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 22:40:22 by zheylkoss         #+#    #+#             */
/*   Updated: 2023/07/03 23:52:45 by zheylkoss        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANB_HPP
# define HUMANB_HPP

class HumanB{
private :
    Weapon *weapon;
    std::string name;
    
public :
    HumanB(std::string value): name(value), weapon(nullptr){};
    void setWeapon(Weapon *weapon_main);
    void attack();
    ~HumanB();
};

#endif