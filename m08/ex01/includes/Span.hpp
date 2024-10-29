/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:38:05 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/29 22:25:47 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_HPP
# define Span_HPP

#include <cstdlib>
#include <exception>
#include <vector>

class Span {
	private:
		std::vector<int>	list;
		unsigned int	max;
		Span();
	public:
		Span( unsigned int N );
		~Span();
		Span( const Span& other );
		Span& operator=( const Span& other );

		void	addNumber( unsigned int );

		int		shortestSpan( void ) const;
		int		longestSpan( void ) const;

		class tooMuchNumbers: std::exception {
			const char * what() const throw() {
				return ("too much numbers");
			}
		};
		class tooFewNumbers: std::exception {
			const char * what() const throw() {
				return ("too few numbers");
			}
		};

};

#endif