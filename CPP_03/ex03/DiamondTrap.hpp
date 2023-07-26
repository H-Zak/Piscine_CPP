/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 02:02:20 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/26 16:11:49 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap
{
private :
	std::string name;
public :
	DiamondTrap();
	DiamondTrap(std::string username);
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap &operator=(const DiamondTrap& other);
	void attack(const std::string &target);
	void whoAmI();
	~DiamondTrap();
};

#endif
