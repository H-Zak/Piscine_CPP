/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:23:21 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/28 18:50:23 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 137, 145, "default")
{
	std::cout << "AForm default Constructor called " << std::endl;
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 137, 145 , target)
{
	std::cout << "AForm Constructor called " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
	//fait appel au constructor avc operator
	*this = other;
}
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
	}
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat & other)
{
	this->beExecuted(other);
	std::ofstream file(this->getTarget() + "_shrubbery");
	// file.is_open();
	if(!file)
	{
		std::cerr << "Impossible to open the file\n";
		return;
	}
	file << "           \\/ |    |/\n"
    "    \\/ / \\||/  /_/___/_\n"
    "     \\/   |/ \\/\n"
    "_\\__\\_\\   |  /_____/_\n"
    "       \\  | /          /\n"
  "__ _-----  |{,-----------~\n"
    "        \\ }{\n"
    "         }{{\n"
    "         }}{\n"
    "         {{}\n"
    "   , -=-~{ .-^- _\n";

    file.close();
	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called " << std::endl;
}