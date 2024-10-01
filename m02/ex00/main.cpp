/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:19:47 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/01 00:28:00 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Harl need 1 argument" << std::endl;
		return (1);
	}

	Harl test;
	test.complain(av[1]);
	return (0);
}
