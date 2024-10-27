/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:08:47 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/27 12:50:10 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include <ostream>

Form::Form():
name("unknown"), sign(false),
signGrade(150),
execGrade(150) {
}

Form::~Form() {
}

Form::Form( const Form& other ):
name(other.name),
sign(other.sign),
signGrade(other.signGrade),
execGrade(other.execGrade) {
}

Form::Form( std::string name, int signGrade, int execGrade):
name(name), sign(false),
signGrade(signGrade), execGrade(execGrade) {
}

Form&	Form::operator=( const Form& other ) {
	sign = other.sign;
	return (*this);
}

const std::string&	Form::getName( void ) const {
	return (this->name);
}

bool				Form::is_signed( void ) const {
	return (this->sign);
}

int		Form::getSignGrade( void ) const {
	return (this->signGrade);
}

int		Form::getExecGrade( void ) const {
	return (this->execGrade);
}

void			Form::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() > signGrade)
		throw Form::GradeTooLowException();
	sign = true;
}

std::ostream& operator<<(std::ostream& os, const Form& var) {
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
