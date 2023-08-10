/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:25:50 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/08/10 17:07:13 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
	: AForm("PresidentialPardonForm", 25, 5, "default target")
{
    // std::cout << "PresidentialPardonForm default constructor called" << std::endl;

}


PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("PresidentialPardonForm", 25, 5, target)
{

    // std::cout << "PresidentialPardonForm name constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & rhs )
	: AForm(rhs)
{

}

PresidentialPardonForm::~PresidentialPardonForm(void) {

    // std::cout << "PresidentialPardonForm default destructor called" << std::endl;

}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & other) {

	AForm::operator=(other);
	return *this;
}

void    PresidentialPardonForm::execute( Bureaucrat const & executor ) const {

    this->beExecuted(executor);

    std::cout << this->getTarget() << " has been forgived by Zaphod Beeblebrox" << std::endl;

}

std::ostream &operator<<(std::ostream &o, const PresidentialPardonForm &src)
{
    o << src.getName() << " , PresidentialPardonForm grade is " << src.getGradeSign() << "." << std::endl;
    return o;
}
