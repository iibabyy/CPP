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

#include "../includes/PresidentialPardonForm.hpp"
#include <iostream>

// class PresidentialPardonForm:
// public AForm {
// 	private:
// 		std::string	target;
// 	public:
// 		PresidentialPardonForm();
// 		PresidentialPardonForm( std::string target );
// 		~PresidentialPardonForm();
// 		PresidentialPardonForm( const PresidentialPardonForm& other );
// 		PresidentialPardonForm& operator=( const PresidentialPardonForm& other );

// 		const static int signGrade = 25;
// 		const static int execGrade = 5;

// 		void	presidentialPardon( void );
// };

PresidentialPardonForm::PresidentialPardonForm():
AForm("unknown", 25, 5),
target("unknown") {
};

PresidentialPardonForm::~PresidentialPardonForm() {
};

PresidentialPardonForm::PresidentialPardonForm( std::string target ):
AForm(target, 25, 5),
target(target) {
};

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& other ):
AForm(other.target, 25, 5) {
	*this = other;
};

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& other ) {
	target = other.target;
	return (*this);
};

void	PresidentialPardonForm::executeCapacity( void ) const {
	this->presidentialPardon();
}

void	PresidentialPardonForm::presidentialPardon( void ) const {
	std::cout
	<< target
	<< " has been pardoned by Zaphod Beeblebrox"
	<< std::endl;
}
