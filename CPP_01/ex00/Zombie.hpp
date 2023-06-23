/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:45:19 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/06/23 17:42:49 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef Zombie_H
# define Zombie_H

class Zombie {
private :
	std::string zombie_name;
	
public :
	Zombie();
	Zombie* newZombie(std::string name);
	void announce(void);
	~Zombie();
};

#endif