/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:11:11 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/08 00:31:44 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>

class Dog:
public Animal {
	public:
		Dog();
		~Dog();
		Dog( const Dog& other );
		
		Dog&	operator=( const Dog& other );
		void	makeSound( void ) const;
};

#endif