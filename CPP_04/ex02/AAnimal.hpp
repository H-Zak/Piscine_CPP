/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:45:10 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/18 00:44:56 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AAnimal_HPP
# define AAnimal_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
protected :
	std::string type;

public :
	AAnimal();
	AAnimal(std::string name);
	AAnimal(const AAnimal& other);
	AAnimal &operator = (const AAnimal&other );

	virtual void makeSound(void) const = 0;
	std::string getType(void) const;
	virtual ~AAnimal();
	// const = 0 ==> Classe abstraite // securité pour que les utilisateurs crée un AAnimal pour avoir un brain
	virtual Brain*  getBrain(void) const = 0;
};

#endif
