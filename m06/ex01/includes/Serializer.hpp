/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:58:22 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/27 18:28:31 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <stdint.h>

typedef struct s_Data {
	int	content;
} Data;

class Serializer {
	public:
		Serializer();
		~Serializer();
		Serializer( const Serializer& other );
		virtual Serializer& operator=( const Serializer& other ) = 0;

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif