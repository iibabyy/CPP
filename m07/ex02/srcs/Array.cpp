/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:41:57 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/28 23:11:43 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

// Array<T>();
// ~Array<T>();
// Array<T>( const Array<T> & other );
// Array<T>( unsigned int n );

// Array<T>& operator=( const Array<T> & other );
// T& operator[]( size_t n );

// const size_t size( void ) const;

Array::Array<T>() {
	this->array = NULL;
}

Array::~Array<T>() {
	delete this->array;
}

Array::Array<T>( unsigned int n ) {
	this->array = new T[n];
}
