/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:10:51 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/26 11:59:37 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	delete dog;//should not create a leak
	delete cat;

	const Animal* tab[10];
	for (int i = 0; i < 5; i++) {
		tab[i] = new Dog();
		tab[i]->makeSound();
	}

	for (int i = 5; i < 10; i++) {
		tab[i] = new Cat();
		tab[i]->makeSound();
	}
	for (int i = 0; i < 10; i++) {
		std::cout << tab[i]->getType() << std::endl;
		delete tab[i];
	}
	return 0;
}