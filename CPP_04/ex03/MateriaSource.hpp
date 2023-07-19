/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 23:16:50 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/19 02:11:17 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "IMateriaSource.hpp"

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

class MateriaSource : public IMateriaSource
{
private :
	AMateria* Materia[4];

public :
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	MateriaSource &operator=(const MateriaSource &other);

	void learnMateria(AMateria* other);
	AMateria* createMateria(std::string const & type);

	~MateriaSource();

};

#endif
