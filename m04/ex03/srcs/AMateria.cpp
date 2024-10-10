/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:46:13 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/09 20:45:11 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria() {
}

AMateria::~AMateria() {
}

AMateria::AMateria(std::string const & type) {
	this->type = type;
}

AMateria::AMateria( const AMateria& other ) {
	*this = other;
}

AMateria& AMateria::operator=( const AMateria& other ) {
	this->type = other.type;
	return (*this);
}


std::string const & AMateria::getType() const {
	return (this->type);
} // Returns the materia type

void AMateria::use(ICharacter& target) {
	(void)target;
	std::cout
	<< "use of unknow materia" << std::endl;
} // Returns the materia type
