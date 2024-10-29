/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:38:05 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/29 14:40:06 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>
#include <stdexcept>

template <typename T>
class Array {
	private:
		T*	array;
		unsigned int arr_size;
	public:

		Array<T>(): arr_size(0) {
			array = new T[0];
		}
		~Array<T>() {
			delete array;
		}
		Array<T>( const Array<T> & other ): arr_size(other.arr_size) {
			array = new T[arr_size];
			*this = other;
		}
		Array<T>( unsigned int n ): arr_size(n) {
			array = new T[n]();
		}


		Array<T>& operator=( const Array<T> & other ) {
			arr_size = other.arr_size;
			delete(array);
			array = new T[arr_size]();
			for (unsigned int i = 0; i < arr_size; i++) {
				array[i] = other.array[i];
			}
			return (*this);
		}
		T& operator[]( size_t n ) {
			if ( n >= arr_size || n < 0 )
				throw std::invalid_argument("Out of bounds");
			return (array[n]);
		}


		unsigned int size( void ) const {
			return arr_size;
		}

};

#endif