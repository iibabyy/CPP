#include <iostream>
#include "includes/Array.hpp"

int main() {
    try {
        // Test de la création d'un tableau vide
        Array<int> emptyArray;
        std::cout << "Taille de emptyArray : " << emptyArray.size() << std::endl;

        // Test de la création d'un tableau avec un nombre d'éléments donné
        Array<int> intArray(5);
        std::cout << "Taille de intArray : " << intArray.size() << std::endl;
        for (unsigned int i = 0; i < intArray.size(); i++) {
            std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
        }

        // Modification des valeurs du tableau
        for (unsigned int i = 0; i < intArray.size(); i++) {
            intArray[i] = i * 10;
        }
        for (unsigned int i = 0; i < intArray.size(); i++) {
            std::cout << "intArray[" << i << "] après modification = " << intArray[i] << std::endl;
        }

        // Test de la gestion des exceptions pour les index hors limites
        try {
            std::cout << "Accès à intArray[10] (hors limites) : ";
            std::cout << intArray[10] << std::endl;
        } catch (const std::exception& e) {
            std::cout << "Exception attrapée : " << e.what() << std::endl;
        }

        // Test du constructeur de copie
        Array<int> copyArray = intArray;
        std::cout << "Taille de copyArray : " << copyArray.size() << std::endl;
        for (unsigned int i = 0; i < copyArray.size(); i++) {
            std::cout << "copyArray[" << i << "] = " << copyArray[i] << std::endl;
        }

        // Modification de copyArray pour vérifier qu'il est indépendant de intArray
        copyArray[0] = 999;
        std::cout << "Après modification, copyArray[0] = " << copyArray[0] << std::endl;
        std::cout << "intArray[0] = " << intArray[0] << " (doit être inchangé)" << std::endl;

        // Test de l'opérateur d'assignation
        Array<int> assignArray;
        assignArray = intArray;
        std::cout << "Taille de assignArray après assignation : " << assignArray.size() << std::endl;
        for (unsigned int i = 0; i < assignArray.size(); i++) {
            std::cout << "assignArray[" << i << "] = " << assignArray[i] << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << "Une exception est survenue : " << e.what() << std::endl;
    }

    return 0;
}