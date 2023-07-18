/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:47:33 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/18 01:06:58 by zakariyaham      ###   ########.fr       */
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
	std::string getType(void) const;
	~Cat();

};

#endif
