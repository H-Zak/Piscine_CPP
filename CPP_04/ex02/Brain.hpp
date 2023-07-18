/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:30:59 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/17 23:37:58 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain
{
protected:

public :
	Brain();
	Brain(std::string name);
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);

	std::string ideas[100];
	
	~Brain();
};

#endif
