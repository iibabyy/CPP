/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:49:46 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/21 17:55:29 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
	private:
		std::string name;
		int hp;
		int energy;
		int damage;
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& other );
		ClapTrap& operator=( const ClapTrap& other );

		void attack(const std::string& target);
		void take(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif