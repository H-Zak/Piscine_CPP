/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChum.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:42:51 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/06/23 17:45:32 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Zombie.hpp"
#include <string>

void randomChump( std::string name )
{
	Zombie zombie_2;

	zombie_2.zombie_name = name;
	if (zombie_name.compare("Foo") == 0)
		std::cout << zombie_name;
	else
		std::cout << "<" << zombie_name << ">";
	Zombie::announce();
	return ;
}