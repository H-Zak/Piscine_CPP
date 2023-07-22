/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 22:40:20 by zheylkoss         #+#    #+#             */
/*   Updated: 2023/07/22 14:06:35 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include <cstddef>


#ifndef HUMANA_HPP
# define HUMANA_HPP

class HumanA{
private :
    std::string name;
    Weapon *weapon;
    
public :
    HumanA(std::string value, Weapon &weapon_ref);
    void attack();
    ~HumanA();
};

#endif