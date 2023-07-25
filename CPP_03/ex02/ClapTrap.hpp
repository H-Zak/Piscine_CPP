/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:14:41 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/25 16:11:24 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

class ClapTrap{
protected :
	std::string name;
	unsigned int hit_point;
	int energy_points;
	int attack_damage;

public:
	ClapTrap();
	ClapTrap(std::string username);
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap &other);
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	~ClapTrap();
};

#endif
