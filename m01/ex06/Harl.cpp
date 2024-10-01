/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:21:56 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/01 00:27:02 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){};
Harl::~Harl(){};

void	Harl::complain( std::string level ) {
	
	if ( level != "DEBUG" && level != "INFO"
		&& level != "WARNING" && level != "ERROR") {
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;;
			return ;
		}
	switch (1) {
		case 1:
			this->error();
			if (level == "ERROR") { break; }
			//fallthrough
		case 2:
			this->warning();
			if (level == "WARNING") { break; }
			//fallthrough
		case 3:
			this->info();
			if (level == "INFO") { break; }
			//fallthrough
		case 4:
			this->debug();
			if (level == "DEBUG") { break; }
			//fallthrough
	}
}

void	Harl::debug( void ) {
	std::cout
	<< "[ DEBUG ]" << std::endl
	<< " love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !"
	<< std::endl << std::endl;
}

void	Harl::info( void ) {
	std::cout
	<< "[ INFO ]" << std::endl
	<< "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !"
	<< std::endl << std::endl;
}

void	Harl::warning( void ) {
	std::cout
	<< "[ WARNING ]" << std::endl
	<< "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."
	<< std::endl << std::endl;
}

void	Harl::error( void ) {
	std::cout
	<< "[ ERROR ]" << std::endl
	<< "This is unacceptable ! I want to speak to the manager now."
	<< std::endl << std::endl;
}

