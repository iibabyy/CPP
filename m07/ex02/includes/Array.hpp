/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:38:05 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/28 23:07:00 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>
#include <exception>

template <typename T>
class Array {
	private:
		T*	array;
	public:
		Array<T>();
		~Array<T>();
		Array<T>( const Array<T> & other );
		Array<T>( unsigned int n );
		
		Array<T>& operator=( const Array<T> & other );
		T& operator[]( size_t n );

		const size_t size( void ) const;

		class outOfBounds: public std::exception {
			// TODO
		};

};

#endif