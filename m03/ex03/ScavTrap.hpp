/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:49:46 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/07 17:13:04 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap& other );

		ScavTrap& operator=( const ScavTrap& other );

		void	attack(const std::string& target);
		void	guardGate( void );
};

#endif