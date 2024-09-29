/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:33:56 by ibaby             #+#    #+#             */
/*   Updated: 2024/09/29 23:25:06 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
	public:
		void	announce( void );
		void	set_name( std::string name );
		Zombie();
		~Zombie();
	private:
		std::string	name;
};

Zombie	*zombieHorde( int N, std::string name );

#endif