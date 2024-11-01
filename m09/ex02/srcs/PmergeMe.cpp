/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:51:02 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/31 15:12:42 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"
#include <mutex>
#include <vector>
#include <algorithm>

template<typename T>
void	fill(T& container, int tab[], int size) {
	for (int i = 0; i < size; i++) {
		container.push_back(tab[i]);
	}
}

std::vector<int>	merge(std::vector<int>& )

long long	PmergeVec(std::vector<int>& vec, int tab[], int size) {
	fill(vec, tab, size);
	
	
}
