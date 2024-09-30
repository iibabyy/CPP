/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 00:00:24 by ibaby             #+#    #+#             */
/*   Updated: 2024/09/30 18:37:22 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

# include <string>
# include <iostream>

class HumanA {
	public:
		void attack( void );
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
	private:
		Weapon *weapon;
		std::string name;
};

#endif