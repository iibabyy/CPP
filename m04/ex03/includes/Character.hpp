/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:38:06 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/09 21:00:46 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include <cstring>
# include <iostream>

class Character:
public ICharacter
{
	protected:
		AMateria* inventory[4];
		AMateria* garbage[1024];
		std::string name;
		void	add_to_gabrage( AMateria *material );
		void	clear_inventory( void );
	public:
		Character();
		~Character();
		Character( const Character& other );
		Character& operator=( const Character& other );
		Character( std::string name );
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif