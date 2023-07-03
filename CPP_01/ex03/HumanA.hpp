/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zheylkoss <zheylkoss@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 22:40:20 by zheylkoss         #+#    #+#             */
/*   Updated: 2023/07/03 23:20:22 by zheylkoss        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANA_HPP
# define HUMANA_HPP

class HumanA{
private :
    Weapon &weapon;
    std::string name;
    
public :
    HumanA(std::string value, Weapon& weapon_ref) : name(value), weapon(weapon_ref){};
    void attack();
    ~HumanA();
};

#endif