/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:21:56 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/09 17:53:32 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors...

ClapTrap::ClapTrap() {
	std::cout << "New ClapTrap" << std::endl;
	this->hp = 10;
	this->energy = 10;
	this->damage = 0;
};

ClapTrap::ClapTrap( std::string name ) {
	std::cout << "New ClapTrap (name)" << std::endl;
	this->name = name;
	this->hp = 10;
	this->energy = 10;
	this->damage = 0;
};

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructed" << std::endl;
};

ClapTrap::ClapTrap( const ClapTrap& other ) {
	std::cout << "new copied ClapTrap (other)" << std::endl;
	this->name = other.name;
	this->hp = other.hp;
	this->energy = other.energy;
	this->damage = other.damage;
};

ClapTrap& ClapTrap::operator=( const ClapTrap& other ) {
	std::cout << "ClapTrap '=' used" << std::endl;
	this->name = other.name;
	this->hp = other.hp;
	this->energy = other.energy;
	this->damage = other.damage;
	return (*this);
};

// functions

void ClapTrap::attack(const std::string& target) {
	std::cout
	<< "ClapTrap " << this->name
	<< " attacks " << target
	<< ", causing " << this->damage << " points of damage !"
	<< std::endl;
}

void ClapTrap::take(unsigned int amount) {
	std::cout
	<< "ClapTrap " << this->name
	<< " take " << amount << " points of damage !"
	<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout
	<< "ClapTrap " << this->name
	<< " repair " << amount << " hp !"
	<< std::endl;
}
