/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:37:35 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/28 20:20:56 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void swap(T& a, T& b) {
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T& min(T& a, T& b) {
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
T& max(T& a, T& b) {
	if (a > b)
		return a;
	else
		return b;
}

int main() {
	int a = 5;
	int b = 10;

	std::cout << "a: " << a << " | b: " << b << std::endl;
	
	std::cout << "swapping..." << std::endl;
	swap(a, b);

	std::cout << "a: " << a << " | b: " << b << std::endl;

	std::cout << "min: " << min(a, b) << std::endl;
	std::cout << "max: " << max(a, b) << std::endl;

    return 0;
}
