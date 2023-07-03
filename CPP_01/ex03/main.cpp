/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zheylkoss <zheylkoss@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:53:33 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/03 23:54:20 by zheylkoss        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanB.hpp"
#include "HumanA.hpp"

/*
donc si HumainA recoit la reference, 
et que dans le main je modifie club cela modiefira pour HumainA aussi

et pour HumainB il faut un pointeur car il ne recoit pas en parametre lors du contructeur 
la valeur de weapon et donc si on veut que la modification du main se fasse aussi dans HumainB
 il faut que HumainB est l'adresse via pointeur
*/

// int main()
// {
// 	Weapon club = Weapon("crude spiked club");
// 	HumanA bob("Bob", club);
// 	bob.attack();
// 	club.setType("some other type of club");
// 	bob.attack();
// 	return 0;
// }

int main()
{
	HumanB jim("Jim");
	Weapon club = Weapon();
	jim.attack();
	jim.setWeapon(&club);
	club.setType("some other type of club");
	jim.attack();
	return 0;
}