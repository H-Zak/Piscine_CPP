/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:24:21 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/27 17:08:15 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

#ifndef WRONGCat_HPP
#define WRONGCat_HPP

class WrongCat : public WrongAnimal
{


public:
	WrongCat();
	WrongCat(std::string type);
	WrongCat(const WrongCat &other);
	WrongCat &operator=(const WrongCat &other);

	void makeSound(void) const;
	~WrongCat();

};

#endif
