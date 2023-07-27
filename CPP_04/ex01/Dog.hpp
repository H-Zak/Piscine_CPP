/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:48:50 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/27 17:10:39 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

#ifndef DOG_HPP
# define DOG_HPP

class Dog : public Animal
{
private :
	Brain *brain;
public :
	Dog();
	Dog(std::string name);
	Dog(const Dog& other);
	Dog &operator = (const Dog& other );
	Brain* getBrain(void)const;
	virtual void makeSound(void)const;
	~Dog();

};

#endif
