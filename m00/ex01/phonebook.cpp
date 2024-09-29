/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:52:39 by ibaby             #+#    #+#             */
/*   Updated: 2024/09/29 19:35:08 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(){};
PhoneBook::~PhoneBook(){};

void PhoneBook::print_repertory(){
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	std::cout << "‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << std::endl;
	for (int i = 0; i < this->contact_len; i++) {
		this->repertory[i].display_info(i);
	}
	std::cout << "‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << std::endl;
	std::cout << std::endl;
}

std::string	get_input(std::string prompt) {
	std::string input;

	std::cout << prompt << std::endl;
	std::getline(std::cin, input);
	return (input);
}

void	PhoneBook::init(){
	this->contact_len = 0;
}

bool	is_only_digits(std::string input) {
	for (std::size_t i = 0; i < input.length(); i++) {
		if (input[i] < '0' || input[i] > '9')
			return (false);
	}
	return (true);
}

bool	valid_num(std::string input) {
	if (input.length() != 10)
	{
		std::cout << "a phone number must have 10 digits" << std::endl;
		return (false);
	} else {
		if (is_only_digits(input) == false)
		{
			std::cout << "a phone number must contain only digit" << std::endl;
			return (false);
		}
	}
	return (true);
}

void	PhoneBook::add(int index) {
	std::string input;

	input = get_input("First name:");
	this->repertory[index].set_first_name(input);

	input = get_input("Last name:");
	this->repertory[index].set_last_name(input);

	input = get_input("Nickname:");
	this->repertory[index].set_nickname(input);

	while (true) {
		input = get_input("Phone number:");
		if (valid_num(input) == true)
			break;
	}
	this->repertory[index].set_phone_number(input);

	input = get_input("Darkest secret:");
	this->repertory[index].set_darkest_secret(input);
	this->contact_len += 1;
}

void	PhoneBook::search(void) {
	int index;

	this->print_repertory();
	while (true) {
		std::string input = get_input("Enter an index");
		index = std::atoi(input.c_str()) - 1;
		if (is_only_digits(input) == false) {
			std::cout << "bad input" << std::endl;
		} else if (index > this->contact_len - 1 || index < 0) {
			std::cout << "bad input" << std::endl;
		} else {
			break;
		}
	}
	std::cout << std::endl;
	this->repertory[index].list_infos();
	std::cout << std::endl;
}
 