/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:46:13 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/09 18:09:15 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure(): AMateria("cure") {
}

Cure::~Cure() {
}

Cure::Cure( const Cure& other ): AMateria(other.type) {
}

Cure& Cure::operator=( const Cure& other ) {
	this->type = other.type;
	return (*this);
}

Cure* Cure::clone() const {
	return (new Cure());
}

void Cure::use(ICharacter& target) {
	std::cout
	<< "* heals "
	<< target.getName() << "'s wounds *"
	<< std::endl;
}
