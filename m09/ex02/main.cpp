/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 00:09:25 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/31 14:42:27 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/RPN.hpp"
#include <cstdlib>
#include <exception>
#include <iostream>

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "format: <expression>" << std::endl;
		return (EXIT_FAILURE);
	}

	try {
		std::cout << RPN(av[1]) << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return (EXIT_SUCCESS);
}
