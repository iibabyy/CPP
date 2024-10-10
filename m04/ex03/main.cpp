/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:01:49 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/09 21:54:05 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/includes.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete me;

	std::cout << "---MY TESTS---" << std::endl;

	AMateria* tab[100];

	for (int i = 0; i < 100; i += 2) {
		tab[i] = src->createMateria("ice");
		tab[i + 1] = src->createMateria("cure");
	}	// createMateria

	ICharacter* bg = new Character("bg");

	for (int i = 0; i < 100; i++) {
		bg->equip(tab[i]);
	}	// equip test

	int idx[7] = {0, 1, 2, 3, 4, -1000, 1000};

	for (int i = 0; i < 7; i++) {
		bg->use(idx[i], *bob);
	}	// use test

	for (int i = 0; i < 7; i++) {
		bg->unequip(idx[i]);
	}	// unequip test

	for (int i = 0; i < 100; i++) {
		bg->equip(src->createMateria("ice"));
		bg->equip(src->createMateria("wrongType"));
		bg->equip(src->createMateria("cure"));
	}	// some more tests for alloc's handling

	delete src;
	delete bg;
	delete bob;
	return 0;
}
