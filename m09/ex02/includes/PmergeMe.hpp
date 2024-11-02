/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:51:19 by ibaby             #+#    #+#             */
/*   Updated: 2024/11/01 15:52:26 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PmergeMe
# define PmergeMe

#include <vector>
#include <list>
#include <algorithm>
#include <iostream>

void	startSorts(std::vector<int> vec, std::list<int> list);
std::vector<int>	PmergeVec(std::vector<int>& tab);
std::list<int>		PmergeLst(std::list<int>& tab);
bool	isNumOnly(char *arg);
std::vector<int> parseArgs(char **av);
std::ostream& operator<<(std::ostream& os, const std::vector<int>& tab);
std::ostream& operator<<(std::ostream& os, const std::list<int>& tab);

#endif