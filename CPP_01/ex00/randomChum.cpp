/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChum.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:42:51 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/19 18:05:03 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Zombie.hpp"
#include <string>

void randomChump( std::string name )
{
	Zombie zombie_2(name);

	zombie_2.announce();
	return ;
}
