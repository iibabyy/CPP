/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:30:31 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/28 18:31:53 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"
#include <cctype>
#include <cmath>

Serializer::Serializer() {
}

Serializer::~Serializer() {
}

Serializer::Serializer( const Serializer& other ) {
	(void)other;
}

Serializer&	Serializer::operator=( const Serializer& other ) {
	(void)other;
	return (*this);
}

/* Convert */

uintptr_t	Serializer::serialize(Data *ptr) {
	return (reinterpret_cast<unsigned long>(ptr));
}

Data	*Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

