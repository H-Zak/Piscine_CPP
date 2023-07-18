/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:48:50 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/17 23:47:53 by zakariyaham      ###   ########.fr       */
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
	std::string getType(void)const;
	~Dog();

};

#endif
