/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:32:36 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/22 17:22:22 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>


AForm::AForm() : name("nobody"), grade_exec(1), grade_sign(1), Signed(false), target("default_target")
{
	std::cout << "AForm default Constructor called " << std::endl;
}

AForm::AForm(const std::string name, int grade_exec, int grade_sign, std::string target) :name(name), grade_exec(grade_exec), grade_sign(grade_sign), target(target)
{
	this->Signed = false;
	std::cout << "AForm type Constructor called " << std::endl;
	if (this->grade_exec < 1 || this->grade_exec < 1)
		throw (AForm::GradeTooHightException());
	else if (this->grade_exec > 150 || this->grade_sign > 150)
		throw(AForm::GradeTooLowException());
	return ;
}

AForm::AForm (const AForm &other)
{
	std::cout << "AForm copy Constructor called" << std::endl;
	*this = other;
}

AForm &AForm::operator=(const AForm &other)
{
	std::cout << "AForm copy operator Constructor called" << std::endl;
	if (this != &other)
	{
		this->grade_exec = other.getGradeExec();
		this->grade_sign = other.getGradeSign();
		this->Signed = other.getSigned();
		this->name = other.getName();
		this->target = other.getTarget();
	}
	return (*this);
}

std::string AForm::getTarget(void) const
{
	return this->target;
}

std::string AForm::getName(void) const
{
	return this->name;
}

int AForm::getGradeSign(void) const 
{
	return this->grade_sign;
}
int AForm::getGradeExec(void) const
{
	return this->grade_exec;
}

bool AForm::getSigned(void) const
{
	return Signed;
}

bool AForm::beSigned(const Bureaucrat &user)
{
	if (user.getGrade() <= this->getGradeSign())
	{
		this->Signed = true;
		return Signed;
	}
	else
	{
		throw (AForm::GradeTooLowException());
		this->Signed = false;
		return this->Signed;
	}
}

const char *AForm::GradeTooHightException::what() const throw(){

    return ("Grade is too hight !\n");
}

const char *AForm::GradeTooLowException::what() const throw(){

    return ("Grade is too low !\n");
}

const char *AForm::Formisnotsigned::what() const throw()
{

    return ("Form is not signed !");
}

std::ostream &operator<<(std::ostream &os, const AForm &src)
{
	os << "name of the AForm " << src.getName() << " the grade you need to sign " << src.getGradeSign();
	os << " the grade you need to excecute " << src.getGradeExec() << " is this AForm sign ? " << src.getSigned() << std::endl;
	return os;
}
void AForm::beExecuted(const Bureaucrat &other) const
{
	if (!this->getSigned())
		throw AForm::Formisnotsigned();
	if (other.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
}

AForm::~AForm()
{
	std::cout << "AForm Destructor called" << std::endl;

}

