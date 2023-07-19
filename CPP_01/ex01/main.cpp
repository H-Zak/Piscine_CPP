/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:53:33 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/19 18:20:40 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include <string>

int main()
{
	Zombie *newZombie = zombieHorde(10, "Bob");

    std::cout << "TEST 1:" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        newZombie[i].announce();
    }
    std::cout << std::endl;

    std::cout << "TEST 2:" << std::endl;
    newZombie[5].setName("jojo");
    for (int i = 0; i < 10; i++)
    {
        newZombie[i].announce();
    }
    delete [] newZombie;

    Zombie *horde2 = zombieHorde(0, "Bib");
    if (horde2)
        horde2[0].announce();

    delete [] horde2;

    Zombie *horde3 = zombieHorde(-10, "Bab");
    if (horde3)
        horde3[0].announce();

    delete [] horde3;
    return (0);
}
