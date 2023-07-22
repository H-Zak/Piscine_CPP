/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:45:19 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/22 13:33:30 by zhamdouc         ###   ########.fr       */
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
	Zombie(std::string name);
	void setName(std::string zombie_name);
	void announce(void);
	~Zombie();
};

Zombie* zombieHorde(int n, std::string name);
#endif

