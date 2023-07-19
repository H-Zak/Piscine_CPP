/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:19:08 by zheylkoss         #+#    #+#             */
/*   Updated: 2023/07/19 18:21:58 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int n , std::string name )
{
	Zombie *zombie_1;
	int i = 0;

	if (n <= 0)
		return NULL;
	zombie_1 = new Zombie[n];
	while (i < n)
	{
		zombie_1[i].setName(name);
		zombie_1[i].announce();
		i++;
	}
	return	zombie_1;
}
