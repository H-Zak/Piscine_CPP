/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:45:10 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/28 13:44:03 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

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
};

#endif
