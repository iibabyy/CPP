/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 00:00:24 by ibaby             #+#    #+#             */
/*   Updated: 2024/09/30 18:38:33 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
# define HumanB_HPP

# include "Weapon.hpp"

# include <string>
# include <iostream>

class HumanB {
	public:
		void attack( void );
		HumanB( std::string name );
		~HumanB();
		void	setWeapon( Weapon &weapon );
	private:
		Weapon *weapon;
		std::string name;
};

#endif