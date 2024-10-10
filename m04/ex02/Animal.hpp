/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:11:53 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/08 01:11:00 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal {
	protected:
		std::string	type;
	public:
		Animal();
		virtual ~Animal() = 0;
		Animal( const Animal& other );
		
		Animal&	operator=( const Animal& other );
		virtual void	makeSound( void ) const;
		std::string	getType( void ) const;
};

#endif