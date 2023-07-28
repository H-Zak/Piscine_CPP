/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:32:36 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/28 16:00:40 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>


Form::Form() : name("nobody"), grade_exec(1), grade_sign(1), Signed(false)
{
	std::cout << "Form default Constructor called " << std::endl;
}

Form::Form(const std::string name, int grade_exec, int grade_sign) : name(name), grade_exec(grade_exec), grade_sign(grade_sign)
{
	this->Signed = false;
	std::cout << "Form type Constructor called " << std::endl;
	if (this->grade_exec < 1 || this->grade_exec < 1)
		throw (Form::GradeTooHightException());
	else if (this->grade_exec > 150 || this->grade_sign > 150)
		throw(Form::GradeTooLowException());
	return ;
}

Form::Form (const Form &other)
{
	std::cout << "Form copy Constructor called" << std::endl;
	*this = other;
}

Form &Form::operator=(const Form &other)
{
	std::cout << "Form copy operator Constructor called" << std::endl;
	if (this != &other)
	{
		this->grade_exec = other.getGradeExec();
		this->grade_sign = other.getGradeSign();
		this->Signed = other.getSigned();
		this->name = other.getName();
	}
	return (*this);
}


std::string Form::getName(void) const
{
	return this->name;
}

int Form::getGradeSign(void) const 
{
	return this->grade_sign;
}
int Form::getGradeExec(void) const
{
	return this->grade_exec;
}

bool Form::getSigned(void) const
{
	return Signed;
}

bool Form::beSigned(const Bureaucrat &user)
{
	if (user.getGrade() <= this->getGradeSign())
	{
		this->Signed = true;
		return Signed;
	}
	else
	{
		throw (Form::GradeTooLowException());
		this->Signed = false;
		return this->Signed;
	}
}

const char *Form::GradeTooHightException::what() const throw(){

    return ("Grade is too hight !\n");
}

const char *Form::GradeTooLowException::what() const throw(){

    return ("Grade is too low !\n");
}

std::ostream &operator<<(std::ostream &os, const Form &src)
{
	os << "name of the Form " << src.getName() << " the grade you need to sign " << src.getGradeSign();
	os << " the grade you need to excecute " << src.getGradeExec() << " is this Form sign ? " << src.getSigned() << std::endl;
	return os;
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;

}

