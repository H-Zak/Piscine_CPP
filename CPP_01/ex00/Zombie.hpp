/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zheylkoss <zheylkoss@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:45:19 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/03 19:52:08 by zheylkoss        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef Zombie_H
# define Zombie_H

class Zombie {
private :
	std::string name;
	
public :
	Zombie();
	void Mynameis(std::string zombie_name);
	void announce(void);
	~Zombie();
};

#endif

Zombie* newZombie(std::string name);
void randomChump( std::string name);