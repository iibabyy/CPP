/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:11:53 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/07 23:15:56 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>

class Animal {
	protected:
		std::string	type;
	public:
		Animal();
		~Animal();
		Animal( const Animal& other );
		
		Animal&	operator=( const Animal& other );
		virtual void	makeSound( void );
		std::string	getType( void ) const;
};

#endif