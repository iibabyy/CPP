/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:16:38 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/26 17:55:03 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {
	std::cout << "cat created" << std::endl;
	this->brain = new Brain;
	this->type = "Cat";
}

Cat::~Cat() {
	delete this->brain;
	std::cout << "cat destructed" << std::endl;
}

Cat::Cat( const Cat& other ): Animal(other) {
	std::cout << "cat copied" << std::endl;
	this->brain = NULL;
	*this = other;
}

Cat&	Cat::operator=( const Cat& other ) {
	std::cout << "cat copied from '='" << std::endl;
	this->type = other.type;
	delete this->brain;
	this->brain = new Brain(*other.brain);
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << "Miaou Miaou" << std::endl;
}
