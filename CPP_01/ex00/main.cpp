/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zheylkoss <zheylkoss@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:53:33 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/03 19:48:08 by zheylkoss        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include <string>

int main()
{
	Zombie *zombie_1;
	
	zombie_1 = newZombie("first");
	randomChump("FOO");
	delete zombie_1;
}