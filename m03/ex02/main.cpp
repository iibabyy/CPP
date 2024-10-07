/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:19:47 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/06 02:05:05 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
	ClapTrap idrissa ("Idrissa");
	ScavTrap moha ("Moha");
	FragTrap moussa("Moussa");

	idrissa.attack("Moha");
	moha.guardGate();
	moha.take(0);
	moha.beRepaired(0);
	moha.attack("Idrissa");
	idrissa.take(20);
	idrissa.beRepaired(10);
	moussa.highFivesGuys();
	moha.attack("Moussa");
	moussa.take(20);
	moussa.beRepaired(10);
	moussa.attack("Moha");
	moha.take(30);
	
	return 0;
}