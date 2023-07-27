/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:47:33 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/27 17:11:54 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

#ifndef CAT_HPP
# define CAT_HPP

class Cat : public AAnimal
{
private :
	Brain *brain;

public :
	Cat();
	Cat(std::string name);
	Cat(const Cat& other);
	Cat &operator = (const Cat& other );
	Brain* getBrain(void)const;
	virtual void makeSound(void)const;
	~Cat();

};

#endif
