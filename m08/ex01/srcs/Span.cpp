/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:32:01 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/29 22:25:52 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
#include <algorithm>

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

Span::Span ( unsigned int N ): max(N) {
	list = std::vector<int>(N);
}

Span::Span ( const Span& other ) {
	*this = other;
}

Span&	Span::operator=(const Span& other) {
	list = std::vector<int>(other.list);
	max = other.max;
	return (*this);
}

void	Span::addNumber( unsigned int n ) {
	if (list.size() == max)
		throw Span::tooMuchNumbers();
	list.push_back(n);
}

int	Span::longestSpan( void ) const {
	
	if (list.size() < 2)
		throw Span::tooFewNumbers();

	std::vector<int>::const_iterator max = std::max_element(list.begin(), list.end());
	std::vector<int>::const_iterator min = std::min_element(list.begin(), list.end());
	if (max == list.end() || min == list.end())
		throw Span::tooMuchNumbers();

	return (*max - *min);
}

int	Span::shortestSpan( void ) const {
	
	if (list.size() < 2)
		throw Span::tooFewNumbers();

	std::sort(list.begin(), list.end());

	long span = std::max(list[0], list[1]) - std::min(list[0], list[1]);

	for ( std::vector<int>::const_iterator it = list.begin();
		it + 1 != list.end(); it++ ) {
			if (static_cast<long>(*(it + 1) - *it) < span)
				span = *(it + 1) - *it;
		}

	return (span);
}

// Span::Span ( unsigned int N ): {
// }
