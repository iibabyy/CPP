/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 00:10:17 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/31 14:48:12 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"
#include <cctype>
#include <exception>
#include <stack>
#include <stdexcept>
#include <string>
#include <algorithm>

int	getTop(std::stack<int>& stack) {
	int	nb = stack.top();
	stack.pop();
	return (nb);
}

void	execOperator(std::stack<int>& stack, char c) {
	int	n1;
	int	n2;
	
	if (c == '+') {
		n1 = getTop(stack);
		if (stack.empty())
			throw std::invalid_argument("Error");

		n2 = getTop(stack);
		stack.push(n1 + n2);
	}

	if (c == '*') {
		n1 = getTop(stack);
		if (stack.empty())
			throw std::invalid_argument("Error");

		n2 = getTop(stack);
		stack.push(n1 * n2);
	}
	if (c == '-') {
		n1 = getTop(stack);
		if (stack.empty())
			throw std::invalid_argument("Error");

		n2 = getTop(stack);
		stack.push(n2 - n1);
	}
	if (c == '/') {
		n1 = getTop(stack);
		if (stack.empty())
			throw std::invalid_argument("Error");

		n2 = getTop(stack);
		stack.push(n2 / n1);
	}
}

int	RPN(std::string str ) {
	std::stack<int> stack;

	if (str.empty())
		throw std::invalid_argument("Error");

	for (int i = 0; str[i]; i++) {
		if (i % 2 == 1) {
			if (str[i] != ' ')
				throw std::invalid_argument("Error");	
			continue ;
		}
		if (std::isdigit(str[i])) {
			stack.push(str[i] - '0');
		} else if (str[i] == '+' || str[i] == '/' || str[i] == '*' || str[i] == '-') {
			if (stack.empty()) {
				throw std::invalid_argument("Error");
			}
			execOperator(stack, str[i]);
		} else {
			throw std::invalid_argument("Error");
		}
	}
	
	if (stack.size() != 1) {
		throw std::invalid_argument("Error");
	}
	
	return (stack.top());
}
