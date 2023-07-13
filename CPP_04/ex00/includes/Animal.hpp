/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:45:10 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/13 18:05:04 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

class Animal
{
private :
	std::string type;

public :
	Animal();
	Animal(std::string name);
	Animal(const Animal& other);
	Animal &operator = (const Animal&other );
	
	virtual void makeSound(std::string type);

	~Animal();
};

#endif
