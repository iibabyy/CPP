/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:11:47 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/27 14:51:03 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <exception>
# include "AForm.hpp"

class Bureaucrat {
	private:
		void	checkGrade( void ) const;
		const	std::string name;
		int		grade;
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat( const Bureaucrat& other );
		Bureaucrat( std::string name, int grade );
		
		Bureaucrat& operator=( const Bureaucrat& other );


		int				getGrade( void ) const;
		const std::string&	getName( void ) const;

		void	upgrade( void );
		void	downgrade( void );
		void	signForm( AForm& form ) const;
		void	executeForm(AForm const & form);


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

std::ostream& operator<<(std::ostream& os, const Bureaucrat& var);

#endif
