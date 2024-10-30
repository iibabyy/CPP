/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:50:20 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/30 22:38:59 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/BitcoinExchange.hpp"

#include <cstdlib>
#include <iostream>

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "format: <input file>" << std::endl;
		return (EXIT_FAILURE);
	}
	BitcoinExchange(av[1]);	
}
