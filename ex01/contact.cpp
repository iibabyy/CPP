/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 14:05:14 by ibaby             #+#    #+#             */
/*   Updated: 2024/09/29 19:36:39 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(){};
Contact::~Contact(){};

std::size_t ft_strlen(char *str) {
	int i = -1;

	while (str[++i] != '\0');

	return (i);
}

void	display(std::string info) {
	int len = info.length();

	if (len > 10) {
		for (int i = 0; i < 9; i++) {
			std::cout << info[i];
		}
		std::cout << ".";
	} else {
		for (int i = 10 - len; i > 0; i--) {
			std::cout << " ";
		}
		std::cout << info;
	}
	std::cout << "|";
}

void Contact::display_info(int index) {
	std::cout << "|         " << index + 1 << "|";
	display(this->first_name);
	display(this->last_name);
	display(this->nickname);
	std::cout << std::endl;
}

void Contact::init(void) {
	this->first_name.clear();
	this->last_name.clear();
	this->nickname.clear();
	this->phone_num.clear();
	this->darkest_secret.clear();
}

void Contact::set_last_name(std::string arg) {
	this->last_name = const_cast<char *>(arg.c_str());
}

void Contact::set_first_name(std::string arg) {
	this->first_name = const_cast<char *>(arg.c_str());
}

void Contact::set_nickname(std::string arg) {
	this->nickname = const_cast<char *>(arg.c_str());
}

void Contact::set_phone_number(std::string arg) {
	this->phone_num = const_cast<char *>(arg.c_str());
}

void Contact::set_darkest_secret(std::string arg) {
	this->darkest_secret = const_cast<char *>(arg.c_str());
}

void Contact::list_infos(void) {
	
	std::cout << "first name: " << this->first_name << std::endl;
	std::cout << "last name: " << this->last_name << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout << "phone number: " << this->phone_num << std::endl;
	std::cout << "darkest_secret: " << this->darkest_secret << std::endl;
}
