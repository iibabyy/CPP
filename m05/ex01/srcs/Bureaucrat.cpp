/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:30:24 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/26 17:44:49 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include <exception>
#include <ostream>
#include <iostream>

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

void	Bureaucrat::signForm( Form& form ) const {
	try {
		form.beSigned(*this);
	} catch (std::exception &e) {
		std::cout
		<< name
		<< " couldn't sign " << form.getName()
		<< ": " << e.what() << std::endl;
		return ;
	}
	std::cout
	<< name
	<< " signed " << form.getName() << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& var) {
  os
  << var.getName()
  << ", bureaucrat grade "
  << var.getGrade()
  << ".";
  return os;
}
