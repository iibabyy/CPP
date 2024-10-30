/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:37:35 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/30 01:20:49 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Span.hpp"
#include <exception>
#include <iostream>
#include <ostream>
#include <vector>

int main()
{
	Span sp = Span(100000);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	sp.print();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try {
		sp.addNumber(7);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::vector<int> _long = std::vector<int>(1000, 15);
	sp.addRange< std::vector<int> >(_long.begin(), _long.end());
	
	sp.print();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}
