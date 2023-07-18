/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:46:17 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/18 00:38:30 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default Constructor is called\n";
	for (int i = 0; i < 100; i++)
		ideas[i] = "nothing";
}

Brain::Brain(std::string name)
{
	std::cout << "Brain name Constructor is called\n";
	for (int i = 0; i < 100; i++)
		ideas[i] = name;
}

Brain::Brain(const Brain &other)
{
	std::cout << "copy Brain Constructor is called\n";
	*this = other;
}

Brain & Brain::operator=(const Brain &other)
{
	std::cout << "copy operator Brain Constructor is called\n";
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor is called\n";

}
