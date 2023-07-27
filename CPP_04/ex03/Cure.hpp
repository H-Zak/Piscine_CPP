/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:44:12 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/27 15:40:02 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"

#ifndef Cure_HPP
# define Cure_HPP

class ICharacter;

class Cure : public AMateria
{

public :
	Cure();
	Cure(std::string const & type);
	Cure(const Cure &other);
	Cure & operator=(const Cure &other);

	void use(ICharacter& target);
	AMateria* clone()const ;
	virtual ~Cure();
};

#endif
