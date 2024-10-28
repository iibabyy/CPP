/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:37:35 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/28 22:52:28 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/iter.hpp"
#include <iostream>

void printInt(int &x) {
    std::cout << x << " ";
}

// Fonction pour incrémenter chaque élément du tableau d'entiers
void incrementInt(int &x) {
    ++x;
}

// Fonction pour tester `iter` avec un tableau de chaînes de caractères
void printString(std::string &str) {
    std::cout << str << " ";
}

// Fonction pour mettre en majuscule une chaîne de caractères
void toUpperCase(std::string &str) {
    for (int i = 0; str[i]; i++) {
        str[i] = std::toupper(str[i]);
    }
}

int main() {
    // Test avec un tableau d'entiers
    int intArray[] = {1, 2, 3, 4, 5};
    std::size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);
    
    std::cout << "Tableau d'entiers avant incrémentation : ";
    iter(intArray, intArrayLength, printInt);
    std::cout << std::endl;

    iter(intArray, intArrayLength, incrementInt);

    std::cout << "Tableau d'entiers après incrémentation : ";
    iter(intArray, intArrayLength, printInt);
    std::cout << std::endl;

    // Test avec un tableau de chaînes de caractères
    std::string strArray[] = {"hello", "world", "iter", "template"};
    std::size_t strArrayLength = sizeof(strArray) / sizeof(strArray[0]);
    
    std::cout << "Tableau de chaînes avant conversion en majuscules : ";
    iter(strArray, strArrayLength, printString);
    std::cout << std::endl;

    iter(strArray, strArrayLength, toUpperCase);

    std::cout << "Tableau de chaînes après conversion en majuscules : ";
    iter(strArray, strArrayLength, printString);
    std::cout << std::endl;

    return 0;
}