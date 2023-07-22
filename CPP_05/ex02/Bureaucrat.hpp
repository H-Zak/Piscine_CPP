/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 02:25:08 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/22 18:05:21 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <fstream>
class AForm;

class Bureaucrat
{
private :
	const std::string name;
	int grade;

public :
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat();

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

	void	signAForm(AForm &user);
	const std::string getName(void) const ;
	int getGrade(void) const;
	void lowerGrade(void);
	void upGrade(void);
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &src);

#endif
