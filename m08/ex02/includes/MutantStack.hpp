/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:38:05 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/30 14:56:35 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <cstdlib>
#include <stack>

template< typename T >
class MutantStack: public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator begin() { return this->c.begin(); }
		const_iterator cbegin() const { return this->c.begin(); }

		iterator	end() { return this->c.end(); }
		const_iterator	cend() const { return this->c.end(); }

		reverse_iterator rbegin() { return this->c.rbegin(); }
		const_reverse_iterator crbegin() const { return this->c.rbegin(); }

		reverse_iterator	rend() { return this->c.rend(); }
		const_reverse_iterator	crend() const { return this->c.rend(); }
};

#endif