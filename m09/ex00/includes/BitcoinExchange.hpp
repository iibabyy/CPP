/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:00:03 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/30 22:53:47 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_HPP
# define BITCOIN_HPP

# include <vector>
#include <map>
#include <string>
# include <algorithm>

void	getData( std::map<std::string, float>& map );
void	BitcoinExchange(char *path);

#endif
