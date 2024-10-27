/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:13:05 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/26 18:19:41 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDON_HPP
# define PRESIDENTIALPARDON_HPP

#include "AForm.hpp"

class PresidentialPardonForm:
public AForm {
	private:
		std::string	target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm( std::string target );
		~PresidentialPardonForm();
		PresidentialPardonForm( const PresidentialPardonForm& other );
		PresidentialPardonForm& operator=( const PresidentialPardonForm& other );

		const static int signGrade = 25;
		const static int execGrade = 5;
		
		void	executeCapacity( void ) const;
		void	presidentialPardon( void ) const;	
};

#endif