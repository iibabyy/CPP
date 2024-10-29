/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:37:35 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/29 21:21:25 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main() {
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);

	std::list<int> lst;
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);
	lst.push_back(40);
	lst.push_back(50);
    try {

        // Test avec std::vector
        std::cout << "Testing with std::vector:" << std::endl;
        std::cout << "Searching for 3 in vec: ";
        std::vector<int>::const_iterator itVec = easyfind(vec, 3);
        std::cout << "Found " << *itVec << std::endl;

        std::cout << "Searching for 6 in vec: ";
        itVec = easyfind(vec, 6); // devrait lancer une exception
    } catch (const NotFoundException& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        // Test avec std::list
        std::cout << "Testing with std::list:" << std::endl;
        std::cout << "Searching for 30 in lst: ";
        std::list<int>::const_iterator itLst = easyfind(lst, 30);
        std::cout << "Found " << *itLst << std::endl;

        std::cout << "Searching for 60 in lst: ";
        itLst = easyfind(lst, 60); // devrait lancer une exception
    } catch (const NotFoundException& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}