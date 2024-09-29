/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:54:49 by ibaby             #+#    #+#             */
/*   Updated: 2024/09/29 19:38:09 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(int ac, char **av) {
	(void)av;
	if (ac != 1) {
		std::cout << "No arguments required" << std::endl;
		return (1);
	}

	int index = 0;
	std::string input;
	PhoneBook phonebook;
	phonebook.init();

	while (true) {
		std::cout << "What do you want to do today ?" << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD") {
			phonebook.add(index);
			index++;
			if (index == 8)
				index = 0;
		} else if (input == "SEARCH") {
			phonebook.search();
		} else if (input == "EXIT") {
			std::cout << "'BIIIP'" << std::endl;
			return (0);
		}
	}
}