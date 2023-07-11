/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 02:02:20 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/11 03:39:26 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

class DiamondTrap : public FragTrap, public ScavTrap
{
private :
	std::string name;
public :
	DiamondTrap();
	DiamondTrap(std::string username);
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap &operator=(const DiamondTrap& other);
	void whoAmI();
	~DiamondTrap();
};

#endif
