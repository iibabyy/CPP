/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:53:50 by ibaby             #+#    #+#             */
/*   Updated: 2024/09/30 00:00:14 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::setType( std::string new_type ) {
	this->type = new_type;
}

std::string &Weapon::getType( void ) {
	return (this->type);
}
