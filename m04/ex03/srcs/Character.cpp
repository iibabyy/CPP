/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:38:06 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/09 21:45:36 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

void	Character::add_to_gabrage( AMateria *material ) {
	static int i = -1;

	if (++i == 1024)
		i = 0;
	if (this->garbage[i] != NULL) {
		delete(this->garbage[i]);
	}
	this->garbage[i] = material;
}

void	Character::clear_inventory( void ) {
	for (int i = 0; i < 4 && this->inventory[i] != NULL; i++) {
		if (this->inventory[i] == NULL)
			continue;
		this->add_to_gabrage(this->inventory[i]);
		this->inventory[i] = NULL;
	}
}

Character::Character() {
	std::memset(this->inventory, 0, sizeof(AMateria *) * 4);
	std::memset(this->garbage, 0, sizeof(AMateria *) * 1024);
}

Character::~Character() {
	std::cout << "delete char\n";
	this->clear_inventory();
	for (int i = 0; i < 1024; i++) {
		if (this->garbage[i] != NULL)
			delete(this->garbage[i]);
	} // clear garbage
}

Character::Character( const Character& other ) {
	std::memset(this->inventory, 0, sizeof(AMateria *) * 4);
	std::memset(this->garbage, 0, sizeof(AMateria *) * 1024);
	for (int i = 0; i < 4; i++) {
		if (other.inventory[i] == NULL)
			continue;
		this->inventory[i] = other.inventory[i]->clone();
		// delete(this->inventory[i]);
	}
}

Character& Character::operator=( const Character& other ) {
	this->clear_inventory();
	for (int i = 0; i < 4; i++) {
		if (other.inventory[i] == NULL)
			continue;
		this->inventory[i] = other.inventory[i]->clone();
		// delete(this->inventory[i]);
	}
	return (*this);
}

Character::Character( std::string name ): ICharacter() {
	this->name = name;
	std::memset(this->inventory, 0, sizeof(AMateria *) * 4);
	std::memset(this->garbage, 0, sizeof(AMateria *) * 1024);
}

std::string const & Character::getName() const {
	return (this->name);
}

void Character::equip(AMateria* m) {
	if (m == NULL)
		return ;
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i] != NULL)
			continue ;
		else {
			this->inventory[i] = m;
			return ;
		}
	}
	this->add_to_gabrage(m);
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3 || this->garbage[idx] == NULL)
		return ;
	if (this->garbage[idx] != NULL) {
		add_to_gabrage(this->garbage[idx]);
	}
	this->garbage[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3 || this->inventory[idx] == NULL)
		return ;
	this->inventory[idx]->use(target);
}
