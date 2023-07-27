/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:30:59 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/27 17:09:15 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef BRAIN_HPP
#define BRAIN_HPP

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
