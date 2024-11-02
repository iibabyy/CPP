/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 00:09:25 by ibaby             #+#    #+#             */
/*   Updated: 2024/11/01 15:44:19 by ibaby            ###   ########.fr       */
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

	std::list<int> list(vec.begin(), vec.end());


	startSorts(vec, list);



	return (EXIT_SUCCESS);
}
