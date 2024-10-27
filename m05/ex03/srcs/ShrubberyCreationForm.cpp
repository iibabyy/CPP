/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:54:08 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/27 15:22:21 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
AForm("unknown", 145, 137),
target("unknown") {
};

ShrubberyCreationForm::~ShrubberyCreationForm() {
};

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ):
AForm(target, 145, 137),
target(target) {
};

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& other ):
AForm(other.target, 145, 137),
target(other.target) {
};

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& other ) {
	target = other.target;
	return (*this);
};

void	ShrubberyCreationForm::executeCapacity( void ) const {
	this->shrubberyCreation();
}

void	ShrubberyCreationForm::shrubberyCreation( void ) const {
	std::ofstream file;

	file.open((target + "_shrubbery").c_str());
	if (file.fail())
		throw AForm::FileOpeningFailed();

	file
	<< "        *                *\n"
	<< "       ***              ***\n"
	<< "      *****            *****\n"
	<< "     *******          *******\n"
	<< "    *********        *********\n"
	<< "   ***********      ***********\n"
	<< "  *************    *************\n"
	<< "       | |              | |\n"
	<< "       | |              | |"
	<< std::endl;
	file.close();
	std::cout << target << "_shrubbery file created" << std::endl;
}
