/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:47:24 by ibaby             #+#    #+#             */
/*   Updated: 2024/11/01 16:38:40 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <list>
#include <ostream>
#include <vector>

void	printTimes(int size, double vecTime, double lstTime, double stdVecTime) {
	std::cout << std::fixed << "Time to process a range of " << size << " elements with std::vector                 : " << vecTime << std::endl;
	std::cout << std::fixed << "Time to process a range of " << size << " elements with std::list                   : " << lstTime << std::endl;
	std::cout << std::fixed << "Time for std::sort() to process a range of " << size << " elements with std::vector : " << stdVecTime << std::endl;
}

void	startSorts(std::vector<int> vec, std::list<int> list) {
	std::cout << "Before: " << vec << std::endl;
	// std::cout << "Before: " << list << std::endl;

	std::clock_t	start, end;
	double			vecTime, lstTime, stdVecTime;

	start = std::clock();
	std::sort(vec.begin(), vec.end());
	end = std::clock();
	stdVecTime = double(end - start) / CLOCKS_PER_SEC;

	start = std::clock();
	vec = PmergeVec(vec);
	end = std::clock();
	vecTime = double(end - start) / CLOCKS_PER_SEC;


	start = std::clock();
	PmergeLst(list);
	end = std::clock();
	lstTime = double(end - start) / CLOCKS_PER_SEC;

	std::cout << "After:  " << vec << std::endl;
	// std::cout << "After:  " << list << std::endl;

	printTimes(vec.size(), vecTime, lstTime, stdVecTime);

}

bool	isNumOnly(char *arg) {
	for (int i = 0; arg[i] != '\0'; i++) {
		if (std::isdigit(arg[i]) == false) {
			return (false);
		}
	}
	return (true);
}

std::vector<int> parseArgs(char **av) {
	std::vector<int>	tab;
	long long			num;

	for (int i = 0; av[i]; i++) {
		if (av[i][0] == '-')
			throw std::invalid_argument("Error: only positive number allowed");
		if (isNumOnly(av[i]) == false)
			throw std::invalid_argument("Error: unrecognized argument");

		num = std::atoll(av[i]);
		if (num > 2147483647) {
			throw std::invalid_argument("Error: number too large");
		}
		tab.push_back(num);
	}

	return (tab);
}

std::ostream& operator<<(std::ostream& os, const std::vector<int>& tab) {
	std::vector<int>::const_iterator ite = tab.end();

	if (tab.empty())
		return (os);

	int i = 0;

	for (std::vector<int>::const_iterator it = tab.begin(); it != ite; it++) {
		if (it + 1 == ite) {
			os << *it;
		} else {
			os << *it << " ";
			
		}
		if (i >= 4) {
			std::cout << " [...]";
			break ;
		}
		++i;
	}
	return (os);
}

std::ostream& operator<<(std::ostream& os, const std::list<int>& tab) {
	std::list<int>::const_iterator ite = tab.end();

	if (tab.empty())
		return (os);

	int i = 0;
		
	for (std::list<int>::const_iterator it = tab.begin(); it != ite; it++) {
		os << *it << " ";
		if (i >= 4) {
			std::cout << " [...]";
			break ;
		}
		++i;
	}
	return (os);
}
