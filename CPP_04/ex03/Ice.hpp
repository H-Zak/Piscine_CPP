/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:05:48 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/27 15:40:06 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"

#ifndef ICE_HPP
# define ICE_HPP

class ICharacter;

class Ice : public AMateria
{
public :
	Ice();
	Ice(std::string const & type);
	Ice(const Ice &other);
	Ice & operator=(const Ice &other);

	void use( ICharacter& target ) ;
	AMateria* clone()const ;
	virtual ~Ice();
};

#endif
