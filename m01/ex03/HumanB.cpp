/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:05:44 by ibaby             #+#    #+#             */
/*   Updated: 2024/09/30 18:42:24 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) {
	this->name = name;
};

HumanB::~HumanB(){};

void	HumanB::attack( void ) {
	std::cout
	<< this->name
	<< " attacks with their "
	<< this->weapon->getType()
	<< std::endl;
}

void	HumanB::setWeapon( Weapon &weapon ) {
	this->weapon = &weapon;
}
