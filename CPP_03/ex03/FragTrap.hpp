/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 22:42:31 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/26 16:17:20 by zhamdouc         ###   ########.fr       */
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
	void attack(const std::string& target);
	~FragTrap();
};

#endif
