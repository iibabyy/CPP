/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:30:31 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/28 19:09:34 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"
#include <cctype>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <ostream>
#include <stdexcept>
#include <cmath>
#include <string>

ScalarConverter::ScalarConverter() {
}

ScalarConverter::~ScalarConverter() {
}

ScalarConverter::ScalarConverter( const ScalarConverter& other ) {
	(void)other;
}

ScalarConverter&	ScalarConverter::operator=( const ScalarConverter& other ) {
	(void)other;
	return (*this);
}

void	impossible( void ) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

void	specialValue( std::string str ) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << str << "f" << std::endl;
	std::cout << "double: " << str << std::endl;
}

/* Convert */

void	convertFloat( std::string str) {

	float	num;

	if (str == "nan") {
		return specialValue("nan");
	} else if (str == "inf" || str == "+inf") {
		return specialValue("+inf");
	} else if (str == "-inf") {
		return specialValue("-inf");
	} else {
		std::stringstream ss(str);
		ss >> num;
		if (ss.fail())
			return impossible();
	}

	if (std::isprint(static_cast<char>(num)) == false)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(num) << std::endl;
	std::cout << "int: " << static_cast<int>(num) << std::endl;
	if (std::floor(num) == num) {
		std::cout << "float: " << std::fixed << std::setprecision(1) << num << "f" << std::endl;
		std::cout << "double: "<< std::fixed << std::setprecision(1) << static_cast<double>(num) << std::endl;
	} else {
		std::cout << "float: " << num << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(num) << std::endl;
	}
}

void	convertInteger( std::string str ) {

	int	num;

	std::stringstream ss(str);
	ss >> num;
	if (ss.fail())
		return impossible();

	if (std::isprint(static_cast<char>(num)) == false)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(num) << std::endl;	
	std::cout << "int: " << num << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(num) << "f" << std::endl;
	std::cout << "double: "<< std::fixed << std::setprecision(1) << static_cast<double>(num) << std::endl;
}

void	convertDouble( std::string str ) {
	double	num;

	if (str == "nan") {
		return specialValue("nan");
	} else if (str == "inf" || str == "+inf") {
		return specialValue("+inf");
	} else if (str == "-inf") {
		return specialValue("-inf");
	} else {
		std::stringstream ss(str);
		ss >> num;
		if (ss.fail())
			return impossible();
	}

	if (std::isprint(static_cast<char>(num)) == false)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(num) << std::endl;
	std::cout << "int: " << static_cast<int>(num) << std::endl;
	if (std::floor(num) == num) {
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(num) << "f" << std::endl;
		std::cout << "double: "<< std::fixed << std::setprecision(1) << num << std::endl;
	} else {
		std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
		std::cout << "double: " << num << std::endl;
	}
}

// void	convertChar( std::string str ) {
// 	std::cout << "char: ";

// 	try {
// 		int c;
// 		std::stringstream ss(str);
// 		ss >> c;
		
// 		if (ss.fail()) {
// 			std::cout << "impossible" << std::endl;
// 		} else if (c < 0 || c > 256) {
// 			std::cout << "impossible" << std::endl;
// 		} else if (std::isprint(c) == false) {
// 			std::cout << "Non displayable" << std::endl;
// 		} else {
// 			std::cout << static_cast<char>(c) << std::endl;
// 		}

// 	} catch (...) {
// 		std::cout << "impossible" << std::endl;
// 	}
// }

void ScalarConverter::convert( std::string str ) {
	if (str.empty() == true) {
		std::cout << "Empty argument not allowed" << std::endl;
	}

	if (str.find('f') != std::string::npos) {
		convertFloat(str);
	} else if (str.find('.') != std::string::npos) {
		convertDouble(str);
	} else {
		convertInteger(str);
	}
}
