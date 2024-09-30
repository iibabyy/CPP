/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:05:44 by ibaby             #+#    #+#             */
/*   Updated: 2024/09/30 18:42:09 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) {
	this->name = name;
	this->weapon = &weapon;
};
HumanA::~HumanA(){};

void	HumanA::attack( void ) {
	std::cout
	<< this->name
	<< " attacks with their "
	<< this->weapon->getType()
	<< std::endl;
}
