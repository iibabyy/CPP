/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:46:13 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/09 18:09:15 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice(): AMateria("ice") {
}

Ice::~Ice() {
}

Ice::Ice( const Ice& other ): AMateria("ice") {
	*this = other;
}

Ice& Ice::operator=( const Ice& other ) {
	this->type = other.type;
	return (*this);
}

Ice* Ice::clone() const {
	return (new Ice());
}

void Ice::use(ICharacter& target) {
	std::cout
	<< "* shoots an ice bolt at "
	<< target.getName() << " *"
	<< std::endl;
}
