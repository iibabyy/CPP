/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:21:56 by ibaby             #+#    #+#             */
/*   Updated: 2024/09/30 21:26:34 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){};
Harl::~Harl(){};

void	Harl::complain( std::string level ) {
	std::string arg[] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};

	void (Harl::*functions[]) ( void ) = {
		&Harl::debug, &Harl::info, &Harl::warning, &Harl::error
	};

	for (int i = 0; i < 4; i++) {
		if (level == arg[i]) {
			((*this).*(functions[i])) ();
		}
	}
}

void	Harl::debug( void ) {
	std::cout
	<< " love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !"
	<< std::endl;
}

void	Harl::info( void ) {
	std::cout
	<< "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !"
	<< std::endl;
}

void	Harl::warning( void ) {
	std::cout
	<< "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."
	<< std::endl;
}

void	Harl::error( void ) {
	std::cout
	<< "This is unacceptable ! I want to speak to the manager now."
	<< std::endl;
}

