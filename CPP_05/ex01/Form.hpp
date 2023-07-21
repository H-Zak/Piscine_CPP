/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:46:07 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/20 19:05:05 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Form
{
private :
	std::string name;
	int grade_sign;
	int grade_exec;
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

	std::string getName(void);
	int getGradeSign(void);
	int getGradeExec(void);
	bool getSigned(void);
	bool beSigned(const Bureaucrat &user);
};

std::ofstream &operator<<(std::ofstream &o, const Form &src);

#endif
