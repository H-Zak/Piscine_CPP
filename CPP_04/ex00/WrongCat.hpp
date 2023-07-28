/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:24:21 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/28 13:49:38 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCat_HPP
# define WRONGCat_HPP

#include "WrongAnimal.hpp"

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
