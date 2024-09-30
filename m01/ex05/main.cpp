/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:19:47 by ibaby             #+#    #+#             */
/*   Updated: 2024/09/30 21:26:58 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
	Harl test;

	std::cout << "DEBUG:" << std::endl;
	test.complain("DEBUG");
	std::cout << "INFO:" << std::endl;
	test.complain("INFO");
	std::cout << "WARNING:" << std::endl;
	test.complain("WARNING");
	std::cout << "ERROR:" << std::endl;
	test.complain("ERROR");
}
