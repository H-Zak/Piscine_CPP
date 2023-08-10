/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:11:01 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/10 18:42:44 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Intern
{
public :
	typedef struct s_data {
		std::string	_name;
		AForm		 *_type;
	}       t_data;

public :
	Intern();
	Intern(const std::string name, int grade);
	Intern(const Intern &other);
	Intern &operator=(const Intern &other);
	~Intern();
	AForm * makeForm(std::string name, std::string target);
};

#endif
