/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:16:38 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/07 23:15:21 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal() {
	this->type = "";
}

Animal::~Animal() {
}

Animal::Animal( const Animal& other ) {
	this->type = other.getType();
}

Animal&	Animal::operator=( const Animal& other ) {
	*this = other;
	return (*this);
}

std::string	Animal::getType( void ) const {
	return (this->type);
}
