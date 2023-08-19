/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:08:43 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/08/16 15:37:25 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main( void )
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;

    tmp = src->createMateria("ice");
    // std::cout  << tmp->getType()  << std::endl;
    me->equip(tmp);
    tmp = src->createMateria("cure");
    // std::cout << tmp->getType() << std::endl;
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
	me->unequip(1);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
    return 0;
}