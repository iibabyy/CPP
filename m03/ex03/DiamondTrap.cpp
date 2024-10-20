/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:21:56 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/06 02:01:56 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Constructors...

DiamondTrap::DiamondTrap() {
	std::cout << "New DiamondTrap" << std::endl;
};

DiamondTrap::DiamondTrap( std::string _name ): ClapTrap( _name + "_clap_name") {
	std::cout << "New DiamondTrap (name)" << std::endl;
	this->name = _name;
};

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructed" << std::endl;
};

DiamondTrap::DiamondTrap( const DiamondTrap& other ):
ClapTrap(),
ScavTrap(),
FragTrap() {
	std::cout << "new copied DiamondTrap (other)" << std::endl;
	*this = other;
};

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& other ) {
	std::cout << "DiamondTrap '=' used" << std::endl;
	this->name = other.name;
	this->hp = other.hp;
	this->energy = other.energy;
	this->damage = other.damage;
	return (*this);
};

// functions

void DiamondTrap::whoAmI( void ) {
	std::cout
	<< "who am I ? name: " << this->name
	<< " ClapTrap name: " << ClapTrap::name
	<< std::endl;
}