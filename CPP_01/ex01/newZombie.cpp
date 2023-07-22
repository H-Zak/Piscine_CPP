/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:19:08 by zheylkoss         #+#    #+#             */
/*   Updated: 2023/07/22 13:19:56 by zhamdouc         ###   ########.fr       */
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
		if (i == 0)
			zombie_1[i].setName("zak");
		else
			zombie_1[i].setName(name);
		zombie_1[i].announce();
		i++;
	}
	return	zombie_1;
}
