/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:43:05 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/18 20:46:41 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

class Character : public ICharcater
{
private :
	std::string name;
	AMateria* inventory[4];

public :
	Charcater();
	Character(std::string const & type);
	Character(const Character &other);
	Character &operator=(const Character &other);

	std::string const & getName();
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;

	~Character();

};

#endif
