/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:38:05 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/30 00:24:23 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <cstdlib>
// #include <exception>
#include <iterator>
#include <ostream>
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

		void	print( void );
		void	addNumber( int );

		template<typename T>
		void	addRange( typename T::iterator begin, typename T::iterator end ) {
			try {
				(void)static_cast<int>(*begin);
			} catch (...) {
				throw std::invalid_argument("addRange need iterators on <int>");
			}

			for (typename T::iterator it = begin; it != end; it++) {
				addNumber(*it);
			}
		}

		unsigned int	shortestSpan( void );
		unsigned int	longestSpan( void );
		
		template<typename T>
		void	longestSpan( T& begin, T& end );

		class tooMuchNumbers: public std::exception {
			const char * what() const throw() {
				return ("too much numbers");
			}
		};
		class tooFewNumbers: public std::exception {
			const char * what() const throw() {
				return ("too few numbers");
			}
		};

};

#endif