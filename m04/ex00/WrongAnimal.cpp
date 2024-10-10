/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:16:38 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/08 00:12:37 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal() {
	std::cout << "wrong animal created" << std::endl;
	this->type = "wrong animal";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "wrong animal destructed" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other ) {
	std::cout << "wrong animal copied" << std::endl;
	this->type = other.getType();
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& other ) {
	std::cout << "wrong animal copied from '='" << std::endl;
	this->type = other.getType();
	return (*this);
}

void WrongAnimal::makeSound() const {
	std::cout << "I'm a wrong animal !" << std::endl;
}

std::string	WrongAnimal::getType( void ) const {
	return (this->type);
}
