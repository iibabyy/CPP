/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:55:32 by ibaby             #+#    #+#             */
/*   Updated: 2024/09/29 23:44:38 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main() {
	std::string _1 = "HI THIS IS BRAIN";
	std::string *_2 = &_1;
	std::string &_3 = _1;

	std::cout
	<< "_1 address:       " << &_1 << std::endl
	<< "_2 value:         " << _2 << std::endl
	<< "_3 value:         " << &_3 << std::endl
	<< "_________________________________" << std::endl
	<< "_1 value:         " << _1 << std::endl
	<< "_3 value pointed: " << *_2 << std::endl
	<< "_3 value pointed: " << _3 << std::endl;
}
