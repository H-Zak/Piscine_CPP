/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zheylkoss <zheylkoss@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:53:33 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/03 21:25:04 by zheylkoss        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include <string>

int main()
{
	int n = 4;
	Zombie *zombie_1;

	zombie_1 = zombieHorde(n, "first");
	if (n != 0)
		delete[] zombie_1;
}