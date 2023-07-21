/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:46:07 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/21 16:45:04 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

class Form
{
private :
	std::string name;
	int grade_exec;
	int grade_sign;
	bool Signed;

public :
	Form();
	Form(std::string name, int grade_sign, int grade_exec);
	Form(const Form &other);
	Form &operator=(const Form &other);
	~Form();

	class	GradeTooHightException : public std::exception
	{
    public:
		virtual const char *what() const throw();
	};
	class	GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
    };

	std::string getName(void) const;
	int getGradeSign(void) const;
	bool beSigned(const Bureaucrat & user);
	int getGradeExec(void) const;
	bool getSigned(void) const;
};

std::ostream &operator<<(std::ostream &os, const Form &src);

#endif
