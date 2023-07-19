/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:45:19 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/19 18:03:00 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_H
# define Zombie_H

#include <iostream>

class Zombie {
private :
	std::string name;

public :
	Zombie();
	Zombie(std::string zombie_name);
	void announce(void);
	~Zombie();
};
Zombie* newZombie(std::string name);
void randomChump( std::string name);

#endif

