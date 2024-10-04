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

# include <cmath>
# include <iostream>

class Fixed {
	private :
		std::str
	public :
		Fixed();
		Fixed( const Fixed& other );
		Fixed( int num );
		Fixed( float num );
		~Fixed();
		Fixed& operator=( const Fixed& other );

		int	getRawBits( void ) const;
		float	toFloat( void ) const;
		int	toInt( void ) const;
		void	setRawBits( int const raw );
};

std::ostream &operator<<(std::ostream& os, const Fixed& var);

#endif