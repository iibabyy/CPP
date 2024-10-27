/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:37:35 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/27 12:50:18 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include "includes/Bureaucrat.hpp"
#include "includes/Form.hpp"

int main() {
    try {
		Form Idrissa = Form("Idrissa", 10, 5);
		Bureaucrat Ayoub = Bureaucrat("Ayoub", 10);

		std::cout << Idrissa << std::endl;
		std::cout << Ayoub << std::endl;

		Ayoub.signForm(Idrissa);

		Ayoub.downgrade();
		std::cout << Idrissa << std::endl;
		std::cout << Ayoub << std::endl;
		
		Ayoub.signForm(Idrissa);

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

    return 0;
}