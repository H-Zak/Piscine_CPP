/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:44:12 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/18 03:24:59 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"

#ifndef Cure_HPP
# define Cure_HPP

class Cure : public AMateria
{
private :

public :
	Cure();
	Cure(std::string const & type);
	Cure(const Cure &other);
	Cure & operator=(const Cure &other);


	AMateria* clone()const ;
	virtual ~Cure();
};

#endif
