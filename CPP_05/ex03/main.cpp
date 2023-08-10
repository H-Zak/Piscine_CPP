/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:10:04 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/10 18:49:31 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <stdexcept>

int main() {

    std::cout << "INTERN PART" << std::endl;

    try {

        Intern james;
        AForm *form3 = james.makeForm("shrubbery creation", "Bender");

        std::cout << *form3 << std::endl;

        delete form3;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {

        Intern james;
        AForm *form3 = james.makeForm("shrubberp creation", "Bender");

        std::cout << *form3 << std::endl;

        delete form3;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
