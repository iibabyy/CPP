/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:21:56 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/02 18:15:31 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	round(float num) {
	return ((int)(num + 0.5));
}

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->num = 0;
};

Fixed::Fixed( const Fixed& other ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
};

Fixed& Fixed::operator=( const Fixed& other ) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(other.num);
	return (*this);
};

Fixed::Fixed( int num ) {
	std::cout << "Int constructor called" << std::endl;
	this->num = num << this->fractional_bits;
};

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed( float num ) {
	std::cout << "Float constructor called" << std::endl;
	this->num = round(num * std::pow(2, this->fractional_bits));
};

int	Fixed::getRawBits( void ) const {
	return (this->num);
}

void	Fixed::setRawBits( int const raw ) {
	this->num = raw;
}

int	Fixed::toInt( void ) const {
	return (this->num >> this->fractional_bits);
}

float	Fixed::toFloat( void ) const {
	return ((float)(this->num / std::pow(2, this->fractional_bits)));
}

std::ostream
& operator<<(std::ostream& os, const Fixed& var) {
  os << var.toFloat();
  return os;
}