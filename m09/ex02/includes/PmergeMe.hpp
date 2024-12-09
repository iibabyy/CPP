/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:51:19 by ibaby             #+#    #+#             */
/*   Updated: 2024/12/09 14:26:08 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PmergeMe
# define PmergeMe

#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>

template<typename T>
void	jacobsthalSequence(T& vec, int size) {
	bool	finished = false;

	if (size < 2) {
		if (size == 1) {
			vec.push_back(0);
		} return ;

	} else { vec.push_back(0); }

	int tmp, num1 = 0, num2 = 1;

	while (true) {
		for (tmp = num2; tmp > num1; tmp--) {
			if (tmp < size)		{ vec.push_back(tmp); }
			else				{ finished = true; }
		}

		if (finished == true)	{ return ; }

		tmp = num2;
		num2 = num1 + 2 * num2;
		num1 = tmp;
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