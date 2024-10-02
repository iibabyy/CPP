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
		int	num;
		static const int fractional_bits = 8;
	public :
		Fixed();
		Fixed( const Fixed& other );
		Fixed( int num );
		Fixed( float num );
		~Fixed();

		Fixed&	operator=( const Fixed& other );
		Fixed	operator++( int );
		Fixed&	operator++();
		Fixed	operator--( int );
		Fixed&	operator--();
		Fixed	operator+( const Fixed& other );
		Fixed	operator-( const Fixed& other );
		Fixed	operator*( const Fixed& other );
		Fixed	operator/( const Fixed& other );
		bool	operator>( const Fixed& other );
		bool	operator<( const Fixed& other );
		bool	operator<=( const Fixed& other );
		bool	operator>=( const Fixed& other );
		bool	operator==( const Fixed& other );
		bool	operator!=( const Fixed& other );

		void	setRawBits( int const raw );
		int	getRawBits( void ) const;
		int	toInt( void ) const;
		float	toFloat( void ) const;

		static Fixed& min(Fixed& a, Fixed& b);
		static Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream &operator<<(std::ostream& os, const Fixed& var);

#endif