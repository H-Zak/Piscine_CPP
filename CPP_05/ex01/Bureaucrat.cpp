/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 02:25:05 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/20 19:21:02 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("nobody")
{
	std::cout << "Bureaucrat default Constructor called " << std::endl;
	this->grade = 150;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
	std::cout << "Bureaucrat type Constructor called " << std::endl;
	if (this->grade < 1)
		throw (Bureaucrat::GradeTooHightException());
	else if (this->grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	return ;
}

Bureaucrat::Bureaucrat (const Bureaucrat &other) : name(other.name), grade(other.grade)
{
	std::cout << "Bureaucrat copy Constructor called" << std::endl;
	//*this = other;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & other)
{
	std::cout << "Contructor operator of Bureaucrat is called " << std::endl;
	//je peux pas changer son nom c'est un const
	if (this != &other)
		this->grade = other.grade;
	return (*this);
}

const std::string Bureaucrat::getName(void) const
{
	return this->name;
}

int Bureaucrat::getGrade(void) const
{
	return this->grade;
}

void Bureaucrat::lowerGrade(void)
{
	if (this->grade < 150)
	{
		this->grade = this->grade + 1 ;//verifier si poissble avant de faire gerer les exceptions
		std::cout << "You have been lowgraded\n";
	}
	else
		throw(Bureaucrat::GradeTooLowException());
}

void Bureaucrat::upGrade(void)
{
	if (this->grade > 1 )
	{
		this->grade = this->grade - 1 ;//verifier si poissble avant de faire gerer les exceptions
		std::cout << "You have been Upgraded\n";
	}
	else
		throw(Bureaucrat::GradeTooHightException());
}

const char *Bureaucrat::GradeTooHightException::what() const throw(){

    return ("Grade is too hight !\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){

    return ("Grade is too low !\n");
}

void Bureaucrat::signForm(const Form &user)
{

}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &src)
{
	o << src.getName()<<", bureaucrat grade " << src.getGrade() << std::endl;
	return o;
}



Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor of Bureaucrat is called\n";
}
