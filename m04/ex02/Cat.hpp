/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:11:11 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/08 00:41:46 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat:
public Animal {
	private:
		Brain	*brain;
	public:
		Cat();
		~Cat();
		Cat( const Cat& other );
		
		Cat&	operator=( const Cat& other );
		void	makeSound( void ) const;
};

#endif