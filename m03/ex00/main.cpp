/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:19:47 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/21 17:55:05 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap moi ("Idrissa");
	ClapTrap pnj ("Mohammed");

	moi.attack("Mohammed");
	pnj.take(10);
	pnj.beRepaired(5);
	pnj.attack("Idrissa");
	moi.take(10);
	moi.beRepaired(5);
	return 0;
}
