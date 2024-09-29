/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:33:54 by ibaby             #+#    #+#             */
/*   Updated: 2024/09/29 23:33:30 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
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

Zombie	*newZombie() {
	Zombie *new_zombie = new Zombie();
	return (new_zombie);
}

void	randomChump() {
	Zombie	new_zombie = Zombie();
	new_zombie.announce();
}

void	Zombie::set_name( std::string name ) {
	this->name = name;
}
