/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:37:35 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/27 16:36:18 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "includes/Bureaucrat.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include "includes/Intern.hpp"

int main() {
    Intern someRandomIntern;
    AForm* form;

    std::cout << "\n--- Test with RobotomyRequestForm ---" << std::endl;
    try {
        form = someRandomIntern.makeForm("robotomy request", "Bender");
        if (form) {
            std::cout << "Form created successfully: " << form->getName() << "\n";
            delete form;
        }
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "\n--- Test with ShrubberyCreationForm ---" << std::endl;
    try {
        form = someRandomIntern.makeForm("shrubbery creation", "garden");
        if (form) {
            std::cout << "Form created successfully: " << form->getName() << "\n";
            delete form;
        }
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "\n--- Test with PresidentialPardonForm ---" << std::endl;
    try {
        form = someRandomIntern.makeForm("presidential pardon", "Alice");
        if (form) {
            std::cout << "Form created successfully: " << form->getName() << "\n";
            delete form;
        }
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "\n--- Test with Invalid Form ---" << std::endl;
    try {
        form = someRandomIntern.makeForm("invalid form", "Unknown");
        if (form) {
            delete form;
        }
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
