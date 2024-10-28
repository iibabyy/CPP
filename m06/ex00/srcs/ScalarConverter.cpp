/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:30:31 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/28 18:31:53 by ibaby            ###   ########.fr       */
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

/* Convert */

// float	strToFloat( std::string str ) {
// 	float result;

//     result = std::stof(str);

//     return result;
// }

// int	strToInteger( std::string str ) {
	
//     int result = std::stoi(str);
  
//     return (result);
// }

// double	strToDouble( std::string str ) {
// 	double result;

//     result = std::stod(str);

//     return result;
// }

void	convertFloat( std::string str) {

	std::cout << "float: ";

	try {
		if (str == "nan") {
			std::cout << "nanf" << std::endl;
		} else if (str == "inf" || str == "+inf") {
			std::cout << "+inff" << std::endl;
		} else if (str == "-inf") {
			std::cout << "-inff" << std::endl;
		} else {
			float num;
			std::stringstream ss(str);
			ss >> num;

			if (ss.fail())
				throw std::invalid_argument("impossible");
			
			if (std::floor(num) == num)
				std::cout << std::fixed << std::setprecision(1) << num << "f" << std::endl;
			else
				std::cout << num << "f" << std::endl;

		}
	} catch (...) {
		std::cout << "impossible" << std::endl;
	}
}

void	convertInteger( std::string str ) {
    int num;
    std::stringstream ss(str);
    ss >> num;

	std::cout << "int: ";
	if (ss.fail()) {
        std::cout << "impossible" << std::endl;
    } else {
		std::cout << num << std::endl;
	}
}

void	convertDouble( std::string str ) {
	std::cout << "double: ";
	if (str == "nan") {
		std::cout << "nan" << std::endl;
	} else if (str == "inf" || str == "+inf") {
		std::cout << "+inf" << std::endl;
	} else if (str == "-inf") {
		std::cout << "-inf" << std::endl;
	} else {
		double num;
		std::stringstream ss(str);
		ss >> num;
		
		if (ss.fail()) {
			std::cout << "impossible" << std::endl;
			return ;
		}
		if (std::floor(num) == num)
			std::cout << std::fixed << std::setprecision(1) << num << std::endl;
		else
			std::cout << num << std::endl;
	}
}

void	convertChar( std::string str ) {
	std::cout << "char: ";

	try {
		int c;
		std::stringstream ss(str);
		ss >> c;
		
		if (ss.fail()) {
			std::cout << "impossible" << std::endl;
		} else if (c < 0 || c > 256) {
			std::cout << "impossible" << std::endl;
		} else if (std::isprint(c) == false) {
			std::cout << "Non displayable" << std::endl;
		} else {
			std::cout << static_cast<char>(c) << std::endl;
		}

	} catch (...) {
		std::cout << "impossible" << std::endl;
	}
}

void ScalarConverter::convert( std::string str ) {
	if (str.empty() == true) {
		std::cout << "Empty argument not allowed" << std::endl;
	}

	// if (str.find('f') != std::string::npos) {
	// 	fromFloat(str);
	// } else if (str.find('.') != std::string::npos) {
	// 	fromDouble(str);
	// } else {
	// 	fromInt(str);
	// }
	
	convertChar(str);
	convertInteger(str);
	convertFloat(str);
	convertDouble(str);
}
