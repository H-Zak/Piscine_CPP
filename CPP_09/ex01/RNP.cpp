/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RNP.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:09:11 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/08/28 19:02:41 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RNP.hpp"


RNP::RNP()
{
	
	return;
}

RNP::RNP(std::string str)
{
	parsing(str);
	return;
}

RNP::RNP(RNP const &other)
{
	*this = other;
	return;
}

RNP &RNP::operator=(RNP const &other)
{
	if (this != &other)
    {
        this->list= other.getlist();

    }
	return;
}

RNP::~RNP()
{
	
	return;
}

std::stack<float> RNP::getlist(void) const 
{
	return(this->list);
}