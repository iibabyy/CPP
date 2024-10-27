/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:07:54 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/27 16:16:58 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Bureaucrat.hpp"

#ifndef FORM_HPP
# define FORM_HPP

#include <string>

class Bureaucrat;

class AForm {
	private:
		const std::string	name;
		bool				sign;
		const int			signGrade;
		const int			execGrade;
	public:
		AForm();
		virtual ~AForm();
		AForm( std::string name, int signGrade, int execGrade );
		AForm( const AForm& other );

		AForm&	operator=( const AForm& other );


		const std::string&	getName( void ) const;
		int					getExecGrade( void ) const;
		int					getSignGrade( void ) const;
		bool				is_signed( void ) const;

		void				beSigned(const Bureaucrat& bureaucrat);
		virtual void		executeCapacity( void ) const = 0;
		void				execute(Bureaucrat const & executor) const;


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
		class FormNotSigned: public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Form not signed !";
				};
		};
		class FileOpeningFailed: public std::exception {
			public:
				virtual const char *what() const throw() {
					return "File opening failed !";
				};
		};
};

std::ostream& operator<<(std::ostream& os, const AForm& var);

#endif