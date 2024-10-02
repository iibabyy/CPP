/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:19:47 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/03 00:50:13 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main() {
    Point a(0, 0); // Point A du triangle
    Point b(4, 0); // Point B du triangle
    Point c(2, 3); // Point C du triangle

    // 15 tests de points
    Point inside1(2, 1);    // À l'intérieur du triangle
    Point inside2(1, 1);    // À l'intérieur du triangle
    Point inside3(2.5, 1);  // À l'intérieur du triangle
    Point inside4(1.5, 0.5); // À l'intérieur du triangle
    Point inside5(3, 1);    // À l'intérieur, proche de BC

    Point outside1(5, 5);   // À l'extérieur du triangle
    Point outside2(-1, -1); // À l'extérieur du triangle
    Point outside3(4, 4);   // À l'extérieur du triangle
    Point outside4(0, 4);   // À l'extérieur du triangle
    Point outside5(6, 0);   // À l'extérieur, à droite de B

    Point on_edge1(2, 0);   // Sur l'arête AB
    Point on_edge2(3, 1.5); // Sur l'arête BC
    Point on_edge3(1, 1.5); // Sur l'arête AC
    Point corner1(0, 0);    // Sur le sommet A
    Point corner2(4, 0);    // Sur le sommet B

    // Exécution des tests
    std::cout << "Test 1     (inside): " << (bsp(a, b, c, inside1) ? "True" : "False") << std::endl;
    std::cout << "Test 2     (inside): " << (bsp(a, b, c, inside2) ? "True" : "False") << std::endl;
    std::cout << "Test 3     (inside): " << (bsp(a, b, c, inside3) ? "True" : "False") << std::endl;
    std::cout << "Test 4     (inside): " << (bsp(a, b, c, inside4) ? "True" : "False") << std::endl;
    std::cout << "Test 5     (inside): " << (bsp(a, b, c, inside5) ? "True" : "False") << std::endl;

    std::cout << "Test 6    (outside): " << (bsp(a, b, c, outside1) ? "True" : "False") << std::endl;
    std::cout << "Test 7    (outside): " << (bsp(a, b, c, outside2) ? "True" : "False") << std::endl;
    std::cout << "Test 8    (outside): " << (bsp(a, b, c, outside3) ? "True" : "False") << std::endl;
    std::cout << "Test 9    (outside): " << (bsp(a, b, c, outside4) ? "True" : "False") << std::endl;
    std::cout << "Test 10   (outside): " << (bsp(a, b, c, outside5) ? "True" : "False") << std::endl;

    std::cout << "Test 11   (on edge): " << (bsp(a, b, c, on_edge1) ? "True" : "False") << std::endl;
    std::cout << "Test 12   (on edge): " << (bsp(a, b, c, on_edge2) ? "True" : "False") << std::endl;
    std::cout << "Test 13   (on edge): " << (bsp(a, b, c, on_edge3) ? "True" : "False") << std::endl;
    std::cout << "Test 14 (on corner): " << (bsp(a, b, c, corner1) ? "True" : "False") << std::endl;
    std::cout << "Test 15 (on corner): " << (bsp(a, b, c, corner2) ? "True" : "False") << std::endl;

    return 0;
}