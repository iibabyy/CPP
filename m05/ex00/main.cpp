/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:37:35 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/26 15:06:13 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "includes/Bureaucrat.hpp"

int main() {
    try {
        // Valid instantiation
        Bureaucrat john("John", 5);
        std::cout << john << std::endl;

        // Testing increment (should go to grade 4)
        john.upgrade();
        std::cout << john << std::endl;

        // Testing decrement (should go back to grade 5)
        john.downgrade();
        std::cout << john << std::endl;

        // Testing grade too high
        Bureaucrat boss("Boss", 1);
        std::cout << boss << std::endl;
        boss.upgrade(); // Should throw GradeTooHighException
    }
    catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        // Testing grade too low
        Bureaucrat intern("Intern", 150);
        std::cout << intern << std::endl;
        intern.downgrade(); // Should throw GradeTooLowException
    }
    catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        // Invalid instantiation (grade too high)
        Bureaucrat boss("Big Boss", 0);
    }
    catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        // Invalid instantiation (grade too low)
        Bureaucrat lazy("Lazy", 151);
    }
    catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}