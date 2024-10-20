/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:16:38 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/09 18:03:12 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal() {
	std::cout << "animal created" << std::endl;
	this->type = "animal";
}

// Animal::~Animal() {
// 	std::cout << "animal destructed" << std::endl;
// }

Animal::Animal( const Animal& other ) {
	std::cout << "animal copied" << std::endl;
	this->type = other.getType();
}

Animal&	Animal::operator=( const Animal& other ) {
	std::cout << "animal copied from '='" << std::endl;
	this->type = other.getType();
	return (*this);
}

void Animal::makeSound() const {
	std::cout << "I'm just an animal !" << std::endl;
}

std::string	Animal::getType( void ) const {
	return (this->type);
}
