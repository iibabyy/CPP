/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:16:38 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/07 17:32:26 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal() {
	this->type = "Dog";
}

Dog::~Dog() {
}

Dog::Dog( const Dog& other ): Animal(other) {
	this->type = "Dog";
}

Dog&	Dog::operator=( const Dog& other ) {
	*this = other;
	return (*this);
}

void	Dog::makeSound( void ) {
	std::cout << "Wouaf Wouaf" << std::endl;
}
