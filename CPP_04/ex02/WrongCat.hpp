/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:24:21 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/17 22:12:46 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

#ifndef WRONGCat_HPP
#define WRONGCat_HPP

class WrongCat : public WrongAnimal
{
protected :
	std::string type;

public:
	WrongCat();
	WrongCat(std::string type);
	WrongCat(const WrongCat &other);
	WrongCat &operator=(const WrongCat &other);

	void makeSound(void) const;
	std::string getType(void)const;
	~WrongCat();

};

#endif
