/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:16:38 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/09 17:55:02 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {
	std::cout << "cat created" << std::endl;
	this->type = "Cat";
}

Cat::~Cat() {
	std::cout << "cat destructed" << std::endl;
}

Cat::Cat( const Cat& other ): Animal(other) {
	std::cout << "cat copied" << std::endl;
	*this = other;
}

Cat&	Cat::operator=( const Cat& other ) {
	std::cout << "cat copied from '='" << std::endl;
	this->type = other.type;
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << "Miaou Miaou" << std::endl;
}
