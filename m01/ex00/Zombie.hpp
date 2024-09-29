/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:33:56 by ibaby             #+#    #+#             */
/*   Updated: 2024/09/29 23:30:02 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
	public:
		void	announce( void );
		Zombie	*newZombie( std::string name );
		void	randomChump( std::string name );
		Zombie( std::string name );
		~Zombie();
	private:
		std::string	name;
};

void	randomChump( std::string name );
Zombie	*newZombie( std::string name );

#endif