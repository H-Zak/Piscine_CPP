/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:30:59 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/28 14:16:06 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
public :
	Brain();
	Brain(std::string name);
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);

	std::string ideas[100];
	
	~Brain();
};

#endif
