/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:58:22 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/27 18:28:31 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>

class ScalarConverter {
	public:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter( const ScalarConverter& other );
		virtual ScalarConverter& operator=( const ScalarConverter& other ) = 0;

		static void convert( std::string str );
};

#endif