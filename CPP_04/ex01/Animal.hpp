/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:45:10 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/28 14:02:30 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
protected :
	std::string type;

public :
	Animal();
	Animal(std::string name);
	Animal(const Animal& other);
	Animal &operator = (const Animal&other );

	virtual void makeSound(void) const;
	std::string getType(void) const;
	virtual ~Animal();
	// const = 0 ==> Classe abstraite // securité pour que les utilisateurs crée un animal pour avoir un brain
	virtual Brain*  getBrain(void) const = 0;
};

#endif
