/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 22:40:27 by zheylkoss         #+#    #+#             */
/*   Updated: 2023/07/22 13:36:34 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon{
private :
    std::string type;
    
public :
    Weapon();
    Weapon(std::string value) : type(value){};
    void setType(std::string value);
    std::string getType(void) const;
    ~Weapon();
};

#endif