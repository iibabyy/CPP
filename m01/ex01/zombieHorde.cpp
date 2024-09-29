/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:06:34 by ibaby             #+#    #+#             */
/*   Updated: 2024/09/29 23:28:44 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name ) {
	if (N < 0)
		return (NULL);
	Zombie	*horde = new Zombie[N];

	for (int i = 0; i < N; i++) {
		horde[i].set_name(name);
	}
	return (horde);
}
