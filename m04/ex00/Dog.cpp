/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:16:38 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/20 18:43:01 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal() {
	std::cout << "dog created" << std::endl;
	this->type = "Dog";
}

Dog::~Dog() {
	std::cout << "dog destructed" << std::endl;
}

Dog::Dog( const Dog& other ): Animal(other) {
	std::cout << "dog copied" << std::endl;
	this->type = "Dog";
}

Dog&	Dog::operator=( const Dog& other ) {
	std::cout << "dog copied from '='" << std::endl;
	this->type = other.type;
	return (*this);
}

void	Dog::makeSound( void ) const {
	std::cout << "Wouaf Wouaf" << std::endl;
}
