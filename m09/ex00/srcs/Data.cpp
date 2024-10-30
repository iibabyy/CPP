/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:02:14 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/30 22:55:13 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"
#include <algorithm>
#include <cctype>
#include <exception>
#include <fstream>
#include <stdexcept>
#include <string>
#include <cstring>
#include <iostream>

bool	allDigit(std::string str ) {
	for (int i = 0; str[i]; i++) {
		if (std::isdigit(str[i]) == false)
			return (false);
	}
	return (true);
}

void	checkLine(std::string line, int i) {
	if (line.empty())
		return ;
	
	if (i == 0) {
		if (line != "date,exchange_rate")
			throw std::invalid_argument("Error: first line have to be 'date,exchange_rate' ");
		return ;
	}

	if (std::count(line.begin(), line.end(), ',') != 1)
		throw std::invalid_argument("Error0: parsing error");

	if (std::count(line.begin(), line.end(), '-') != 2
			|| line[4] != '-' || line[7] != '-')
		throw std::invalid_argument("Error1: parsing error");

	std::string date = line.substr(0, line.find(","));
	if (date.empty())
		throw std::invalid_argument("Error2: parsing error");

	for (size_t it = 0; line[it] != '\0'; it++) {
		if (std::isdigit(line[it]) == false && std::isspace(line[it]) == false
				&& line[it] != ',' && line[it] != '-' && line[it] != '.') {	
			throw std::invalid_argument("Error3: parsing error");
		}
	}

	line = line.substr(0, line.find(","));

	float 	value;
	std::string tmp;

	/*	YEAR  */

	tmp = line.substr(0, line.find("-"));
	line.erase(0, line.find("-") + 1);

	if (tmp.empty() || line.empty()) {		// incomplete date
		throw std::invalid_argument("Error4: parsing error");
	} else if (tmp.size() != 4) {			// year don't have 4 digits
		throw std::invalid_argument("Error5: parsing error");
	} else if (allDigit(tmp) == false) { // year don't have only digit
		throw std::invalid_argument("Error6: parsing error");
	}

	value = std::atof(tmp.c_str());			// Year value
	if (value >= 3000)
		throw std::invalid_argument("Error7: parsing error");
	else if (value < 0)
		throw std::invalid_argument("Error8: parsing error");


	/*	MONTH  */

	// std::cerr << "tmp: " << tmp << " | line: " << line << std::endl;

	tmp = line.substr(0, line.find("-")); // Month
	line.erase(0, line.find("-") + 1);

	if (tmp.empty() || line.empty()) {		// incomplete date
		throw std::invalid_argument("Error9: parsing error");
	} else if (tmp.size() != 2) {			// month don't have 2 digits ('01', '11'...)
		throw std::invalid_argument("Error10: parsing error");
	} else if (allDigit(tmp) == false) { // month don't have only digit
		throw std::invalid_argument("Error11: parsing error");
	}

	value = std::atof(tmp.c_str());
	if (value > 12)
		throw std::invalid_argument("Error12: parsing error");
	else if (value < 1)
		throw std::invalid_argument("Error13: parsing error");


	/*	DAY  */

	tmp = line.substr(0);

	if (tmp.empty()) {		// incomplete date
		throw std::invalid_argument("Error14: parsing error");
	} else if (tmp.size() != 2) {			// day don't have 2 digits ('01', '11'...)
		throw std::invalid_argument("Error15: parsing error");
	} else if (allDigit(tmp) == false) { // day don't have only digit
		throw std::invalid_argument("Error16: parsing error");
	}

	value = std::atof(tmp.c_str());
	if (value > 31)
		throw std::invalid_argument("Error17: parsing error");
	else if (value < 1)
		throw std::invalid_argument("Error18: parsing error");

}

void	checkValue(float value) {
	if (value < 0)
		throw std::invalid_argument("Error19: negative number");

	if (value >= 100000)
		throw std::invalid_argument("Error20: number too large");

}

void	lineToMap(std::map<std::string, float>& map, std::string line, int i) {
	checkLine(line, i); // parsing

	std::string date = line.substr(0, line.find(","));

	float	value = std::atof(line.substr(line.find(",") + 1).c_str());

	checkValue(value);

	if (map[date])
		throw std::invalid_argument("Error21: duplicated date");
	
	map[date] = value;
}

void	getData( std::map<std::string, float>& map ) {
	std::ifstream	file("data.csv");
	std::string		line;

	if (file.is_open() == false)
		throw std::invalid_argument("unable to open data file");

	for (int i = 0; std::getline(file, line); i++) {
				lineToMap(map, line, i);
	}
}
