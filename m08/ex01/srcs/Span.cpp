/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:32:01 by ibaby             #+#    #+#             */
/*   Updated: 2024/11/04 16:38:48 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

#include <cstdlib>
#include <algorithm>
// #include <exception>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>

// Span( unsigned int N );
// ~Span();
// Span( const Span& other );
// Span& operator=( const Span& other );

// void	addNumber( unsigned int );

// int		shortestSpan( void ) const;
// int		longestSpan( void ) const;

// class tooMuchNumbers: std::exception {
// 	const char * what() const throw() {
// 		return ("too much numbers");
// 	}
// };
// class tooFewNumbers: std::exception {
// 	const char * what() const throw() {
// 		return ("too few numbers");
// 	}
// };

Span::~Span() {
}

Span::Span ( unsigned int const N ): max(N) {
	list = std::vector<int>();
}

Span::Span ( const Span& other ) {
	*this = other;
}

Span&	Span::operator=(const Span& other) {
	list = std::vector<int>(other.list);
	max = other.max;
	return (*this);
}

void	Span::print( void ) {
	for (std::vector<int>::iterator it = list.begin(); it != list.end(); it++) {
		if (it + 1 == list.end())
			std::cout << *it << std::endl;
		else
			std::cout << *it << ", ";
	}
}

void	Span::addNumber( int n ) {
	if (list.size() == max)
		throw Span::tooMuchNumbers();
	list.push_back(n);
}

unsigned int	Span::longestSpan( void ) {
	
	if (list.size() < 2)
		throw Span::tooFewNumbers();

	std::vector<int>::iterator max = std::max_element(list.begin(), list.end());
	std::vector<int>::iterator min = std::min_element(list.begin(), list.end());
	
	return (static_cast<unsigned>(*max - *min));
}

unsigned int	Span::shortestSpan( void ) {

	if (list.size() < 2)
		throw Span::tooFewNumbers();

	std::sort(list.begin(), list.end());

	unsigned int span = std::max(list[0], list[1]) - std::min(list[0], list[1]);
	list.
	for ( std::vector<int>::iterator it = list.begin();
		it + 1 != list.end(); it++ ) {
			if (static_cast<unsigned int>(*(it + 1) - *it) < span)
				span = *(it + 1) - *it;
		}

	return (span);
}
