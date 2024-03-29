/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:46:07 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/22 18:02:56 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AForm_HPP
# define AForm_HPP

#include "Bureaucrat.hpp"

class AForm
{
private :
	std::string name;
	int grade_exec;
	int grade_sign;
	std::string target;
	bool Signed;

public :
	AForm();
	AForm(std::string name, int grade_sign, int grade_exec, std::string target);
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
	virtual ~AForm();

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
	class Formisnotsigned : public std::exception{
		public :
			virtual const char * what() const throw();
	};
	std::string getName(void) const;
	int getGradeSign(void) const;
	bool beSigned(const Bureaucrat & user);
	int getGradeExec(void) const;
	bool getSigned(void) const;
	std::string  getTarget(void) const;
	void beExecuted(const Bureaucrat &other) const;
	virtual void  execute( const Bureaucrat &executor ) const = 0;
};

std::ostream &operator<<(std::ostream &os, const AForm &src);

#endif
