/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:11:47 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/27 14:51:03 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <exception>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
	public:
		Intern();
		~Intern();
		Intern( const Intern& other );
		
		Intern& operator=( const Intern& other );

		AForm	*makeForm( std::string form, std::string target );

		class UnknownForm: public std::exception {
				virtual const char *what() const throw() {
					return "Form creation failed: Unrecognized Form";
				};
		};
};

#endif
