/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:41:30 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/09 21:50:36 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

void MateriaSource::clear_book( void ) {
	for (int i = 0; i < 4; i++) {
		if (this->book[i] != NULL) {
			delete(this->book[i]);
			this->book[i] = NULL;
		}
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (this->book[i] != NULL) {
			delete(this->book[i]);
		}
	}
}

MateriaSource::MateriaSource() {
	std::memset(this->book, 0, sizeof(AMateria*) * 4);
}

MateriaSource::MateriaSource( const MateriaSource& m ) {
	for (int i = 0; i < 4; i++) {
		this->book[i] = m.book[i];
	}
}

MateriaSource& MateriaSource::operator=( const MateriaSource& m ) {
	this->clear_book();
	for (int i = 0; i < 4; i++) {
		if (m.book[i] != NULL) {
			this->book[i] = m.book[i];
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia) {
	static int i = -1;

	for (int i = 0; i < 4 && this->book[i]; i++) {
		if (this->book[i]->getType() == materia->getType())
			return ;
	}
	if (++i == 4)
		i = 0;
	if (this->book[i] != NULL)
		delete(this->book[i]);
	this->book[i] = materia;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4 && this->book[i]; i++) {
		if (this->book[i]->getType() == type) {
			return (this->book[i]->clone());
		}
	}
	return (NULL);
}
