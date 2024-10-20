/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:36:34 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/09 18:13:08 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure:
public AMateria
{
	protected:
		std::string	type;
	public:
		Cure();
		~Cure();
		Cure( const Cure& other );
		Cure& operator=( const Cure& other );

		std::string const & getType() const; //Returns the materia type
		Cure* clone() const;
		void use(ICharacter& target);
};

#endif