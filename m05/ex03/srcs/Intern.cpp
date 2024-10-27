/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:11:47 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/27 14:51:03 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"
#include <iostream>

// class Intern {
// 	public:
// 		Intern();
// 		~Intern();
// 		Intern( const Intern& other );
		
// 		Intern& operator=( const Intern& other );

// 		class UnknownForm: public std::exception {
// 				virtual const char *what() const throw() {
// 					return "Unrecognized Form";
// 				};
// 		};
// };

Intern::Intern() {
}

Intern::~Intern() {
}

Intern::Intern( const Intern& other ) {
	(void)other;
}

Intern&	Intern::operator=( const Intern& other ) {
	(void)other;
	return (*this);
}

AForm	*Intern::makeForm( std::string form, std::string target ) {
	std::string	forms[3] = {
		"robotomy request",
		"shrubbery creation",
		"presidential pardon" };

	for (int i = 0; i < 3; i++) {
		if (forms[i] == form) {
			std::cout << "Intern creates " << form << std::endl;
			switch (i) {
				case 0:
					return new RobotomyRequestForm(target);
				case 1:
					return new ShrubberyCreationForm(target);
				case 2:
					return new PresidentialPardonForm(target);
			}
		}
	}
	throw Intern::UnknownForm();
}
