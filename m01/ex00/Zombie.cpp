/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:33:54 by ibaby             #+#    #+#             */
/*   Updated: 2024/09/29 23:27:07 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) {
	this->name = name;
};
Zombie::~Zombie() {
	std::cout
	<< this->name
	<< " destroyed"
	<< std::endl;
}

void	Zombie::announce( void ) {
	std::cout
	<< this->name
	<< ": BraiiiiiiinnnzzzZ..."
	<< std::endl;
}
