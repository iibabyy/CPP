/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:21:56 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/07 17:07:31 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructors...

ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "New ScavTrap" << std::endl;
	this->hp = 100;
	this->energy = 50;
	this->damage = 20;
};

ScavTrap::ScavTrap( std::string _name ): ClapTrap(_name) {
	std::cout << "New ScavTrap (name)" << std::endl;
	this->hp = 100;
	this->energy = 50;
	this->damage = 20;
};

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructed" << std::endl;
};

ScavTrap::ScavTrap( const ScavTrap& other ): ClapTrap(other.name) {
	std::cout << "new copied ScavTrap (other)" << std::endl;
	*this = other;
};

ScavTrap& ScavTrap::operator=( const ScavTrap& other ) {
	std::cout << "ScavTrap '=' used" << std::endl;
	*this = other;
	return (*this);
};

// functions

void ScavTrap::attack(const std::string& target) {
	std::cout
	<< "ScavTrap " << this->name
	<< " attacks " << target
	<< ", causing " << this->damage << " points of damage !"
	<< std::endl;
}

void ScavTrap::guardGate( void ) {
	std::cout
	<< "ScavTrap " << this->name
	<< ": 'Guard Gate mode !'"
	<< std::endl;
}
