/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:10:04 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/10 17:50:17 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <stdexcept>
#include "AForm.hpp"

int main() {

    try {
        Bureaucrat bill("Bill", 137);
        AForm *form1 = new ShrubberyCreationForm("jardin");
	    std::cout << *form1 << std::endl;

        bill.signAForm(*form1);
        form1->beSigned(bill);
        std::cout << *form1 << std::endl;
        // form1->execute(bill);

        bill.executeForm(*form1);
        delete form1;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        Bureaucrat bob("Bob", 45);
        AForm *form2 = new RobotomyRequestForm("target");
        std::cout << *form2 << std::endl;

        bob.signAForm(*form2);
        form2->beSigned(bob);
        std::cout << *form2 << std::endl;

        // form2->execute(bob);
        bob.executeForm(*form2);

        delete form2;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        Bureaucrat zap("Zaphod Beeblebrox", 1);
        AForm *form3 = new PresidentialPardonForm("President");
        std::cout << *form3 << std::endl;

        zap.signAForm(*form3);
        form3->beSigned(zap);
        std::cout << *form3 << std::endl;

        // form3->execute(zap);

        delete form3;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
