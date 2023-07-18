/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:05:48 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/18 03:17:42 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"

#ifndef ICE_HPP
# define ICE_HPP

class Ice : public AMateria
{
private :

public :
	Ice();
	Ice(std::string const & type);
	Ice(const Ice &other);
	Ice & operator=(const Ice &other);


	AMateria* clone()const ;
	virtual ~Ice();
};

#endif
