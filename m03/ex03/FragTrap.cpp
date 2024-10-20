/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:21:56 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/09 17:54:14 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructors...

FragTrap::FragTrap(): ClapTrap() {
	std::cout << "New FragTrap" << std::endl;
	this->hp = 100;
	this->energy = 100;
	this->damage = 30;
};

FragTrap::FragTrap( std::string _name ): ClapTrap(_name) {
	std::cout << "New FragTrap (name)" << std::endl;
	this->hp = 100;
	this->energy = 100;
	this->damage = 30;
};

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructed" << std::endl;
};

FragTrap::FragTrap( const FragTrap& other ): ClapTrap(other.name) {
	std::cout << "new copied FragTrap (other)" << std::endl;
	*this = other;
};

FragTrap& FragTrap::operator=( const FragTrap& other ) {
	std::cout << "FragTrap '=' used" << std::endl;
	this->name = other.name;
	this->hp = other.hp;
	this->energy = other.energy;
	this->damage = other.damage;
	return (*this);
};

// functions

void FragTrap::highFivesGuys( void ) {
	std::cout
	<< "FragTrap " << this->name
	<< ": wants to high five you !"
	<< std::endl;
}


