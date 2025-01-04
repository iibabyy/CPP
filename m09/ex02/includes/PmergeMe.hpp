/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:51:19 by ibaby             #+#    #+#             */
/*   Updated: 2025/01/04 17:02:47 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PmergeMe
# define PmergeMe

#include <vector>
#include <deque>
#include <cmath>
#include <iostream>

template<typename T>
void	jacobsthalSequence(T& vec, int size) {
	bool finished = false;
	int last = 0;

	if (size == 0) { return; }
	vec.push_back(0);

	for (int temp = 0, n = 1, j = 0; finished == false; n++) {
		j = (std::pow(2, n) - std::pow(-1, n)) / 3;
		
		temp = last;
		last = j;
		for (; j > temp; j--) {
			if (j < size)	{ vec.push_back(j); }
			else			{ finished = true; }
		}
	}
}

void	startSorts(std::vector<int> vec, std::deque<int> deque);
std::vector<int>	PmergeVec(std::vector<int>& tab);
std::deque<int>		PmergeDeque(std::deque<int>& tab);
bool	isNumOnly(char *arg);
std::vector<int> parseArgs(char **av);
std::ostream& operator<<(std::ostream& os, const std::vector<int>& tab);
std::ostream& operator<<(std::ostream& os, const std::deque<int>& tab);

#endif