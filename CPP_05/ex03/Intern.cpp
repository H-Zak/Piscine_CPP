/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:10:58 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/10 18:54:23 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern( void )
{
	// std::cout << "Intern default constructor called" << std::endl;
	return ;
}

Intern::Intern( Intern const &other )
{
	// std::cout << "Intern copy constructor called" << std::endl;
	*this = other;
}

Intern::~Intern() {

	// std::cout << "Intern default destructor called" << std::endl;
}

Intern & Intern::operator=( Intern const &a ) {

	// std::cout << "Intern assignment operator called" << std::endl;
	(void)a;
	return ( *this );
}

AForm * Intern::makeForm(std::string name, std::string target) {

	AForm *dest = NULL;

	t_data  tab[] = {
		{"shrubbery creation", new ShrubberyCreationForm(target)},
		{"robotomy request", new RobotomyRequestForm(target)},
		{"presidential pardon", new PresidentialPardonForm(target)}
	};

	for (int i = 0; i < 3; i++)
	{
		if (tab[i]._name == name)
		{
			std::cout << "Intern found " << name << std::endl;
			dest = tab[i]._type;
		}
		else
			delete tab[i]._type;
	}

	if (dest)
		std::cout<< "Intern creates " << name << std::endl;
	else
		throw std::invalid_argument("Intern didn't found Form.");

	return (dest);
}
