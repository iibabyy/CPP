/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:10:09 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/01 01:51:57 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private :
		int	num;
		static const int bits = 8;
	public :
		Fixed();
		Fixed( const Fixed& other );
		~Fixed();
		int	getRawBits( void ) const;
		int	setRawBits( int const raw ) const;
};

#endif