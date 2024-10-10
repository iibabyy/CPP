/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:16:38 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/08 00:13:46 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
	std::cout << "wrong cat created" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat() {
	std::cout << "wrong cat destructed" << std::endl;
}

WrongCat::WrongCat( const WrongCat& other ): WrongAnimal(other) {
	std::cout << "wrong cat copied" << std::endl;
	this->type = "WrongCat";
}

WrongCat&	WrongCat::operator=( const WrongCat& other ) {
	std::cout << "wrong cat copied from '='" << std::endl;
	this->type = "WrongCat";
	return (*this);
}
