/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:07:54 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/27 12:47:01 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Bureaucrat.hpp"

#ifndef FORM_HPP
# define FORM_HPP

#include <string>

class Bureaucrat;

class Form {
	private:
		const std::string	name;
		bool				sign;
		const int			signGrade;
		const int			execGrade;
	public:
		Form();
		~Form();
		Form( std::string name, int signGrade, int execGrade );
		Form( const Form& other );

		Form&	operator=( const Form& other );

		const std::string&	getName( void ) const;
		bool				is_signed( void ) const;
		int			getSignGrade( void ) const;
		int			getExecGrade( void ) const;

		void	beSigned(const Bureaucrat& bureaucrat);

		class GradeTooHighException: public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Grade too high !";
				};
		};
		class GradeTooLowException: public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Grade too low !";
				};
		};
};

std::ostream& operator<<(std::ostream& os, const Form& var);

#endif