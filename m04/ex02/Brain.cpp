/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 00:37:56 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/09 18:03:46 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain() {
	std::cout << "Brain created" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructed" << std::endl;
}

Brain::Brain( const Brain& other ) {
	std::cout << "Brain copied" << std::endl;
	*this = other;
}

Brain& Brain::operator=( const Brain& other ) {
	std::cout << "Brain copied from '='" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = other.ideas[i];
	}
	return (*this);
}
