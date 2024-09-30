/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:53:50 by ibaby             #+#    #+#             */
/*   Updated: 2024/09/30 18:39:33 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) {
	this->type = type;
};
Weapon::~Weapon(){};

void	Weapon::setType( std::string new_type ) {
	this->type = new_type;
}

std::string &Weapon::getType( void ) {
	return (this->type);
}
