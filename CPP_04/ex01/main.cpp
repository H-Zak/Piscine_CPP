/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:49:41 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/28 15:20:16 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "Animal.hpp"

int main() {

    Animal  *animals[5];

    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    animals[0]->makeSound();
    animals[1]->makeSound();
    animals[2]->makeSound();
    animals[3]->makeSound();
    animals[4]->makeSound();




    Brain *brain;

	brain = animals[0]->getBrain();
	brain->ideas[0] = "test";
	brain->ideas[1] = "other test";
	std::cout << animals[0]->getType() << ": " << animals[0]->getBrain()->ideas[0] << std::endl;
	std::cout << animals[0]->getType() << ": " << animals[0]->getBrain()->ideas[1] << std::endl;

    for (int j = 0; j < 5; j++)
        delete animals[j];
    return 0;
}
