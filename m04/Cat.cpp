/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:16:38 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/07 23:17:08 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {
	this->type = "Cat";
}

Cat::~Cat() {
}

Cat::Cat( const Cat& other ): Animal(other) {
	this->type = "Cat";
}

Cat&	Cat::operator=( const Cat& other ) {
	*this = other;
	return (*this);
}

void	Cat::makeSound( void ) {
	std::cout << "Miaou Miaou" << std::endl;
}
