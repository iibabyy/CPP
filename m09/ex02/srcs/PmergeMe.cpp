/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:51:02 by ibaby             #+#    #+#             */
/*   Updated: 2024/11/02 13:56:08 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

template<typename T>
void	fill(T& container, int tab[], int size) {
	for (int i = 0; i < size; i++) {
		container.push_back(tab[i]);
	}
}

std::vector<int>	PmergeVec(std::vector<int>& tab) {

	/* create size/2 pairs */

	size_t	pairs = 0;

	std::vector<int> result, big, small;
	std::vector<int>::iterator pos, end = tab.end();

	for (std::vector<int>::iterator it = tab.begin(); it != end; it++) {
		int	n1 = *it;
		++pairs;
		++it;

		if (it != end) {
			int	n2 = *it;
			big.push_back(std::max(n1, n2));
			small.push_back(std::min(n1, n2));
		} else {
			small.push_back(n1);
			break ;
		}
	}

	// if there is 1 pair: (sort and)? stop
	if (pairs == 1) {
		result.push_back(small[0]);
		if (big.empty() == false)
			result.push_back(big[0]);
		return (result);
	}

	// else : new vec = PmergeVec(bigger number of each pairs)
	result = PmergeVec(big);

	// insert the smallest numbers of each pairs (binary search)

	end = small.end();

	for (std::vector<int>::iterator it = small.begin(); it != end; it++) {
		pos = std::lower_bound(result.begin(), result.end(), *it);

		result.insert(pos, *it);
	}

	return (result);
}

std::list<int>	PmergeLst(std::list<int>& tab) {

	/* create size/2 pairs */

	size_t	pairs = 0;

	std::list<int> result, big, small;
	std::list<int>::iterator pos, end = tab.end();

	for (std::list<int>::iterator it = tab.begin(); it != end; it++) {
		int	n1 = *it;
		++pairs;
		++it;

		if (it != end) {
			int	n2 = *it;
			big.push_back(std::max(n1, n2));
			small.push_back(std::min(n1, n2));
		} else {
			small.push_back(n1);
			break ;
		}
	}

	/* if there is 1 pair: (sort and)? stop  */
	if (pairs == 1) {
		result.push_back(small.back());
		if (big.empty() == false)
			result.push_back(big.back());
		return (result);
	}

	/* else : new lst = PmergeLst(bigger number of each pairs)  */
	result = PmergeLst(big);

	/* insert the smallest numbers of each pairs (binary search)  */

	end = small.end();

	for (std::list<int>::iterator it = small.begin(); it != end; it++) {
		pos = std::lower_bound(result.begin(), result.end(), *it);

		result.insert(pos, *it);
	}

	return (result);
}
