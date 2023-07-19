/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:53:33 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/19 18:00:11 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include <string>

int main()
{
	 // Stack
    std::cout << "Test 1: Basic" << std::endl;
	Zombie	zombieName("Bill");
	zombieName.announce();

    // Heap
    std::cout << "Test 2: New Zombie" << std::endl;
    Zombie  *zombieNew = newZombie("Bob");
    zombieNew->announce();
    delete(zombieNew);

    std::cout << "Test 3: Random Zombie" << std::endl;
    randomChump("Dope");

    return (0);
}
