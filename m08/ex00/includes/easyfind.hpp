/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:38:05 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/29 21:22:20 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <exception>
#include <iterator>
#include <algorithm>

class NotFoundException: public std::exception {
	public:
		const char * what() const throw() {
			return "Element not found";
		}
};

template <typename T>
typename T::const_iterator	easyfind(const T& tab, int toFind) {
	typename T::const_iterator it = std::find(tab.begin(), tab.end(), toFind);

	if (it == tab.end())
		throw NotFoundException();
	else
	 	return it;
}

#endif