/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:25:37 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/08/10 17:09:38 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
	: AForm("RobotomyRequestForm", 72, 45, "default target")
{
    // std::cout << "RobotomyRequestForm default constructor called" << std::endl;

}


RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("RobotomyRequestForm", 72, 45, target)
{

    // std::cout << "RobotomyRequestForm name constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & rhs )
	: AForm(rhs)
{

}

RobotomyRequestForm::~RobotomyRequestForm(void) {

    // std::cout << "RobotomyRequestForm default destructor called" << std::endl;

}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & other) {

	AForm::operator=(other);
	return *this;
}

void    RobotomyRequestForm::execute( Bureaucrat const & executor ) const {

    int nbr = 0;

    this->beExecuted(executor);
    std::cout << "ZZZZZZ....." << std::endl;

    srand(time(NULL));
    nbr = rand() % 2;

    if (nbr == 1)
        std::cout << this->getTarget() << " has been robotomized !" << std::endl;
    else
        std::cout << this->getTarget()  << " can't be robotomize !" << std::endl;
}

std::ostream &operator<<(std::ostream &o, const RobotomyRequestForm &src)
{
    o << src.getName() << " , RobotomyRequestForm grade is " << src.getGradeSign() << "." << std::endl;
    return o;
}
