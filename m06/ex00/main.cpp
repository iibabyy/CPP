/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:37:35 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/27 18:26:55 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ScalarConverter.hpp"

#include <cstdlib>
#include <iostream>

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Format: <string to convert>" << std::endl;
		return (EXIT_FAILURE);
	}
	ScalarConverter::convert(av[1]);
    return 0;
}
