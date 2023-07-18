/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:48:50 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/17 22:11:24 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

#ifndef DOG_HPP
# define DOG_HPP

class Dog : public Animal
{
private :

public :
	Dog();
	Dog(std::string name);
	Dog(const Dog& other);
	Dog &operator = (const Dog& other );

	virtual void makeSound(void)const;
	std::string getType(void)const;
	~Dog();

};

#endif
