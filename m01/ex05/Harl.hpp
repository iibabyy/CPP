/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:10:09 by ibaby             #+#    #+#             */
/*   Updated: 2024/09/30 20:28:09 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl {
	public :
		void	complain( std::string level );
		Harl();
		~Harl();
	private :
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif