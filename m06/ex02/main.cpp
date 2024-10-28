/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:37:35 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/28 19:55:14 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/A.hpp"
#include "includes/B.hpp"
#include "includes/C.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

Base	*generate( void ) {
	int num = std::rand() % 3;
	
	if (num == 0) {
		return new A;
	} else if (num == 1) {
		return new B;
	} else {
		return new C;
	}
}

void	identify(Base *ptr) {
	
	A*	a = dynamic_cast<A*>(ptr);
	B*	b = dynamic_cast<B*>(ptr);
	C*	c = dynamic_cast<C*>(ptr);

	if (a != NULL) {
		std::cout << "identified ptr: A" << std::endl;
	} else if (b != NULL) {
		std::cout << "identified ptr: B" << std::endl;
	} else if (c != NULL) {
		std::cout << "identified ptr: C" << std::endl;
	} else {
		std::cout << "Non identified ptr" << std::endl;
	}

}

void	identify(Base &ptr) {
	
	try {
		(void)dynamic_cast<A&>(ptr);
		std::cout << "identified ref: A" << std::endl;
		return ;
	} catch (...) {}

	try {
		(void)dynamic_cast<B&>(ptr);
		std::cout << "identified ref: B" << std::endl;
		return ;
	} catch (...) {}
	
	try {
		(void)dynamic_cast<C&>(ptr);
		std::cout << "identified ref: C" << std::endl;
		return ;
	} catch (...) {}

	std::cout << "Non identified ref" << std::endl;

}

int main() {
	std::srand(std::time(0));

    // Génération aléatoire d'une instance de A, B ou C
    Base* instance = generate();

    // Identification de l'instance via pointeur
    std::cout << "Identification via pointeur: ";
    identify(instance);

    // Identification de l'instance via référence
    std::cout << "Identification via référence: ";
    identify(*instance);

    // Nettoyage de la mémoire
    delete instance;
    return 0;
}
