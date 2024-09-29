/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:14:07 by ibaby             #+#    #+#             */
/*   Updated: 2024/09/29 13:41:44 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

void	str_to_upper(char *str) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 32;
		}
	}
}

int main(int ac, char **av) {
	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}

	for (int i = 1; i < ac; i++) {
		str_to_upper(av[i]);
		std::cout << av[i];
	}
	std::cout << std::endl;
	return (0);
}

