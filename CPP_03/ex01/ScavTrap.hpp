/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:27:25 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/10 22:26:52 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string username);
	ScavTrap(const ScavTrap& other);
	ScavTrap& operator=(const ScavTrap &other);
	void	attack(const std::string &target);
	void	beRepaired(unsigned int amount);
	void	guardGate();
	~ScavTrap();
};

#endif
