/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:08:47 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/26 17:43:50 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include <ostream>

AForm::AForm():
name("unknown"), sign(false),
signGrade(150),
execGrade(150) {
}

AForm::~AForm() {
}

AForm::AForm( const AForm& other ):
name(other.name),
sign(other.sign),
signGrade(other.signGrade),
execGrade(other.execGrade) {
}

AForm::AForm( std::string name, int signGrade, int execGrade):
name(name), sign(false),
signGrade(signGrade), execGrade(execGrade) {
}

AForm&	AForm::operator=( const AForm& other ) {
	sign = other.sign;
	return (*this);
}

const std::string&	AForm::getName( void ) const {
	return (name);
}

bool				AForm::is_signed( void ) const {
	return (sign);
}

int		AForm::getSignGrade( void ) const {
	return (signGrade);
}

int		AForm::getExecGrade( void ) const {
	return (execGrade);
}

void			AForm::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() > signGrade)
		throw AForm::GradeTooLowException();
	sign = true;
}

void		AForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > execGrade) {
		throw AForm::GradeTooLowException();
	} else if (sign == false) {
		throw AForm::FormNotSigned();
	} else {
		executeCapacity();
	}
}

std::ostream& operator<<(std::ostream& os, const AForm& var) {
  os
  << "form "
  << var.getName()
  << ", required grade to sign: "
  << var.getSignGrade()
  << ", required grade to exec: "
  << var.getExecGrade()
  << ".";
  return os;
}
