/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 00:09:25 by ibaby             #+#    #+#             */
/*   Updated: 2024/12/09 14:27:08 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PmergeMe.hpp"
#include <vector>

// TODO: check doublon if needed (?)

int	main(int ac, char **av) {
	if (ac < 2) {
		return (EXIT_FAILURE);
	}

	std::vector<int> vec;

	try {
		vec = parseArgs(&av[1]);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		return (EXIT_FAILURE);
	}

	std::deque<int> deque(vec.begin(), vec.end());


	startSorts(vec, deque);



	return (EXIT_SUCCESS);
}
