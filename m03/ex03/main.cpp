/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:19:47 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/21 18:19:07 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void ) {
	ClapTrap idrissa ("Idrissa");
	ScavTrap moha ("Moha");
	FragTrap moussa("Moussa");
	DiamondTrap imad ("Imad");

	imad.whoAmI();
	imad.attack("Idrissa");
	imad.highFivesGuys();
	moussa.attack("Imad");
	imad.guardGate();
	imad.take(5);
	imad.beRepaired(5);

	return 0;
}