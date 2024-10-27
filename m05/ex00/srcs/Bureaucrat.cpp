/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:30:24 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/26 17:20:08 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include <ostream>

Bureaucrat::Bureaucrat(): name("unknown"), grade(150) {
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat( const Bureaucrat& other ):
name(other.name), grade(other.grade) {
	checkGrade();
}

Bureaucrat::Bureaucrat( std::string name, int grade ):
name(name), grade(grade) {
	checkGrade();
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& other ) {
	this->grade = other.grade;
	checkGrade();
	return (*this);
}

void	Bureaucrat::checkGrade( void ) const {
	if (this->grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else if (this->grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
}

int		Bureaucrat::getGrade() const {
	return (this->grade);
}

const std::string&	Bureaucrat::getName() const {
	return (this->name);
}

void	Bureaucrat::upgrade() {
	this->grade -= 1;
	checkGrade();
}

void	Bureaucrat::downgrade() {
	this->grade += 1;
	checkGrade();
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& var) {
  os
  << var.getName()
  << ", bureaucrat grade "
  << var.getGrade()
  << ".";
  return os;
}

/* Exceptions */

// Bureaucrat::GradeTooLowException::GradeTooLowException() {
// 	this->errMessage = "Grade too low !";
// }

// Bureaucrat::GradeTooLowException::~GradeTooLowException() {
// }

// const char *Bureaucrat::GradeTooLowException::what( void ) const noexcept {
// 	return this->errMessage.c_str();
// }

// Bureaucrat::GradeTooHighException::GradeTooHighException() {
// 	this->errMessage = "Grade too high !";
// }

// Bureaucrat::GradeTooHighException::~GradeTooHighException() {
// }

// const char *Bureaucrat::GradeTooHighException::what( void ) const noexcept {
// 	return this->errMessage.c_str();
// }
