/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:37:35 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/28 19:25:16 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Serializer.hpp"

#include <cstdlib>
#include <stdint.h>
#include <iostream>

int main() {

	Data		*data = new Data;
	uintptr_t	tmp;

	int	content = 8;

	data->content = content;

	std::cout << "content: " << data->content << std::endl;

	tmp = Serializer::serialize(data);
	data = Serializer::deserialize(tmp);

	std::cout << "content: " << data->content << std::endl;

	delete data;
    return 0;
}
