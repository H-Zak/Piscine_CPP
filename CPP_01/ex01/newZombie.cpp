/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zheylkoss <zheylkoss@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:19:08 by zheylkoss         #+#    #+#             */
/*   Updated: 2023/07/03 21:24:40 by zheylkoss        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int n , std::string name )
{
	Zombie *zombie_1;
	int i = 0;
    
	if (n == 0)
		return zombie_1;
	zombie_1 = new Zombie[n];
	while (i < n)
	{
		zombie_1[i].Mynameis("first");
		zombie_1[i].announce();
		i++;
	}
	return	zombie_1;
}