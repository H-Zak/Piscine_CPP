/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:47:33 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/13 18:05:51 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

#ifndef CAT_HPP
# define CAT_HPP

class Cat : public Animal
{
private :

public :
	Cat();
	Cat(std::string name);
	Cat(const Cat& other);
	Cat &operator = (const Cat&other );
	
	void makeSound(std::string type);

	~Cat();

};

#endif
