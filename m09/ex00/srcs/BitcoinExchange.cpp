/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:44:36 by ibaby             #+#    #+#             */
/*   Updated: 2024/11/02 17:16:40 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"
#include <cctype>
#include <cstring>
#include <exception>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

bool	checkInput(std::string line) {

	if (std::count(line.begin(), line.end(), '.') > 1) {
		std::cout << "Error: bad input => " << line << std::endl;
		return (false);
	} else if (std::count(line.begin(), line.end(), '|') != 1) {
		std::cout << "Error: bad input => " << line << std::endl;
		return (false);
	}

	for (int i = 0; line[i]; i++) {
		if ((i >= 0 && i < 4) || i == 5 || i == 6 || i == 8 || i == 9) {
			if (std::isdigit(line[i]) == false) {
				std::cout << "Error: bad input => " << line << std::endl;
				return (false);
			}
		}
		else if (i == 4 || i == 7) {
			if (line[i] != '-') {
				std::cout << "Error: bad input => " << line << std::endl;
				return (false);
			}
		}
		else if (i == 11 && line[i] != '|') {
			std::cout << "Error: bad input => " << line << std::endl;
			return (false);
		}
		else if ((i == 10 || i == 12) && line[i] != ' ') {
			std::cout << "Error: bad input => " << line << std::endl;
			return (false);
		}
		else if (i == 13) {
			if (line[i] == '-') {
				std::cout << "Error: not a positive number." << std::endl;
				return (false);
			}
			else if (line[i] == '+' && isdigit(line[i + 1]) == false) {
				std::cout << "Error: bad input => " << line << std::endl;
				return (false);
			}
			else if (std::isdigit(line[i]) == false) {
				std::cout << "Error: bad input => " << line << std::endl;
				return (false);
			}
		}
		else if (i > 12 && std::isdigit(line[i]) == false && line[i] != '.') {
			std::cout << "Error : bad input => " << line << std::endl;
			return (false);
		}
	}
	return (true);
}

void	BitcoinExchange(char *path) {

	char *tmp = std::strrchr(path, '.');

	if (tmp == NULL || std::strcmp(tmp, ".txt") != 0) {
		std::cerr << path <<" is not '.txt'" << std::endl;
		return ;
	}

	std::ifstream file(path);

	if (file.is_open() == false) {
		std::cerr << "failed to open " << path << std::endl;
		return ;
	}

	std::map<std::string, float> map;

	try {
		getData(map);
	} catch (std::exception &e) {
		std::cerr << "data.csv: " << e.what() << std::endl;
		return ;
	}

	std::string	line;
	
	for (int i = 0; std::getline(file, line); i++) {
		if (i == 0) {
			if (line != "date | value") {
				std::cout << "Error: bad input => " << line << " (expected: 'date | value')"<< std::endl;
				return ;
			}
			continue ;
		}

		if (checkInput(line) == false) {
			continue ;
		}

		float	asked = std::atol(line.substr(line.find("|") + 1).c_str());
		
		if (asked > 1000) {
			std::cout << "Error: too large number." << std::endl;
			continue ;
		} else if (static_cast<long>(asked) < 0) {
			std::cout << "Error: too small number." << std::endl;
			continue ;
		}

		std::string	date_asked = line.substr(0, 10);

		std::map<std::string, float>::iterator end = map.end();
		std::map<std::string, float>::iterator date_target = map.begin();

		for (std::map<std::string, float>::iterator it = map.begin(); it != end; it++) {
			if (it->first > date_asked) {
				break;
			}
			date_target = it;
		}

		// std::cerr << "DBG: target: " << date_target->first << " | price: " << date_target->second << std::endl;
		// std::cerr << "DBG: date_asked: " << date_asked << " | value asked :" << asked << std::endl;

		std::cout << date_asked << " => " << asked << " = " << date_target->second * asked << std::endl;

	}

}
