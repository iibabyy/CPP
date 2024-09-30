/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:44:36 by ibaby             #+#    #+#             */
/*   Updated: 2024/09/30 20:07:03 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.h"

std::size_t ft_strlen(const char *str) {
	int i = -1;

	while (str[++i] != '\0');

	return (i);
}

int main(int ac, char **av)
{
	if (ac != 4) {
		std::cout << "Usage: <file> <occurrence to replace> <new string>"
		<< std::endl;
		return (1);
	}

	std::string content;
	std::ifstream file (av[1]);
	if (file.is_open() == false) {
		std::cout << "opening file failed" << std::endl;
		return (1);
	}

	for (std::string tmp; file;) {
		tmp = file.get();
		content.append(tmp);
	}

	size_t		len = ft_strlen(av[2]);
	for (size_t i = content.find(av[2]); i != std::string::npos; i = content.find(av[2])) {
		content.erase(i, len);
		content.insert(i, av[3]);
	}

	std::string new_file_path (av[1]);
	new_file_path.append(".replace");
	std::ofstream new_file;
	new_file.open(new_file_path.c_str());
	if (new_file.is_open() == false) {
		std::cout << "file creation failed" << std::endl;
		return (1);
	}
	new_file << content.erase(ft_strlen(content.c_str()) - 1) + "\0";
	return (0);
}