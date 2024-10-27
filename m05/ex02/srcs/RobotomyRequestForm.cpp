/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:16:36 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/27 15:12:20 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"
#include <cstdlib>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm():
AForm("unknown", 72,45),
target("unknown") {
};

RobotomyRequestForm::~RobotomyRequestForm() {
};

RobotomyRequestForm::RobotomyRequestForm( std::string target ):
AForm(target, 72,45),
target(target) {
};

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& other ):
AForm(other.target, 72,45),
target(other.target) {
};

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& other ) {
	target = other.target;
	return (*this);
};

void	RobotomyRequestForm::executeCapacity( void ) const {
	this->robotomyRequest();
}

void	RobotomyRequestForm::robotomyRequest( void ) const {
	std::cout << "* SOME DRILLING NOISES *" << std::endl;

	if (std::rand() % 2 == 0) {
		std::cout << target << " has been successfully robotomized !" << std::endl;
	} else {
		std::cout << "robotomy on " << target << " failed !" << std::endl;
	}
}
