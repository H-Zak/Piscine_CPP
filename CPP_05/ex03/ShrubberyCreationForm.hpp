/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:51:26 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/08/10 17:32:36 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFROM_HPP
# define SHRUBBERYCREATIONFROM_HPP

#include "AForm.hpp"
class AForm;

class ShrubberyCreationForm : public AForm
{
private :

public :
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
	~ShrubberyCreationForm();

	void execute(const Bureaucrat &other) const;
};

#endif
