/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:36:34 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/09 18:13:08 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Ice:
public AMateria
{
	protected:
		std::string	type;
	public:
		Ice();
		~Ice();
		Ice( const Ice& other );
		Ice& operator=( const Ice& other );
		Ice* clone() const;
		void use(ICharacter& target);
};

#endif