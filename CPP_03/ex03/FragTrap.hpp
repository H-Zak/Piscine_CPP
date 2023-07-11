/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 22:42:31 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/11 02:01:08 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class FragTrap : virtual public ClapTrap
{
public :
	FragTrap();
	FragTrap(std::string username);
	FragTrap(const FragTrap& other);
	FragTrap &operator=(const FragTrap& other);
	void highFivesGuys(void);
	void beRepaired(unsigned int amount);
	void attack(const std::string& target);
	~FragTrap();
};

#endif
