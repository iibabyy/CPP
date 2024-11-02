/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:10:51 by ibaby             #+#    #+#             */
/*   Updated: 2024/11/02 16:56:14 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wrongCat = new WrongCat();
	// Animal notInstantiable;

	delete dog;//should not create a leak
	delete cat;
	delete wrongCat;

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