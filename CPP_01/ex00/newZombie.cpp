/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zheylkoss <zheylkoss@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:19:08 by zheylkoss         #+#    #+#             */
/*   Updated: 2023/07/03 19:46:37 by zheylkoss        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *zombie_1;
    
	zombie_1 = new Zombie();
	zombie_1->Mynameis("first");
	zombie_1->announce();
	return	zombie_1;
}