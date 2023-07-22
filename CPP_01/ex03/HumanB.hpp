/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 22:40:22 by zheylkoss         #+#    #+#             */
/*   Updated: 2023/07/22 14:10:01 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANB_HPP
# define HUMANB_HPP

class HumanB{
private :
    std::string name;
    Weapon *weapon;

public :
    HumanB(std::string value);
    void setWeapon(Weapon &weapon_main);
    void attack();
    ~HumanB();
};

#endif
