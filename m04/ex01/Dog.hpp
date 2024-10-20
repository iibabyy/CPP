/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:11:11 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/08 00:42:03 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog:
public Animal {
	private:
		Brain	*brain;
	public:
		Dog();
		~Dog();
		Dog( const Dog& other );
		
		Dog&	operator=( const Dog& other );
		void	makeSound( void ) const;
};

#endif