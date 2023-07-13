/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:48:50 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/13 18:06:09 by zhamdouc         ###   ########.fr       */
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
	Dog &operator = (const Dog&other );
	
	virtual void makeSound(std::string type);

	~Dog();

};

#endif
