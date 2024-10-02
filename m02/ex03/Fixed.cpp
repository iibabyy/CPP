/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:21:56 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/02 19:49:58 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Constructors */


Fixed::Fixed() {
	this->num = 0;
};

Fixed::Fixed( const Fixed& other ) {
	this->num = other.num;
};

Fixed::Fixed( int num ) {
	this->num = num << this->fractional_bits;
};

Fixed::~Fixed() {};

Fixed::Fixed( float num ) {
	this->num = round(num * std::pow(2, this->fractional_bits));
};

/* Operators */


Fixed& Fixed::operator=( const Fixed& other ) {
	this->setRawBits(other.num);
	return (*this);
};

Fixed	Fixed::operator++( int ) {
	Fixed temp = *this;
	this->num += 1;
	return (temp);
}

Fixed&	Fixed::operator++() {
	this->num += 1;
	return (*this);
}

Fixed	Fixed::operator--( int ) {
	Fixed temp = *this;
	this->num -= 1;
	return (temp);
}

Fixed&	Fixed::operator--() {
	this->num -= 1;
	return (*this);
}


Fixed Fixed::operator+(const Fixed& other) {
	Fixed result;
	float num = this->toFloat() + other.toFloat();

	result.num = round(num * std::pow(2, result.fractional_bits));
	return (result);
};

Fixed Fixed::operator-(const Fixed& other) {
	Fixed result;
	float num = this->toFloat() - other.toFloat();

	result.num = round(num * std::pow(2, result.fractional_bits));
	return (result);
};

Fixed Fixed::operator*(const Fixed& other) {
	std::cout << *this << " * " << other /* << " == " << (*this * other) */ << std::endl;
	Fixed result;
	float num = this->toFloat() * other.toFloat();
	result.num = round(num * std::pow(2, result.fractional_bits));
	return (result);
};

Fixed Fixed::operator/(const Fixed& other) {
	Fixed result;
	float num = this->toFloat() / other.toFloat();

	result.num = round(num * std::pow(2, result.fractional_bits));
	return (result);
};

bool Fixed::operator>( const Fixed& other ) {
	if (this->getRawBits() > other.getRawBits())
		return (true);
	return (false);
};

bool Fixed::operator<( const Fixed& other ) {
	if (this->getRawBits() < other.getRawBits())
		return (true);
	return (false);
};

bool Fixed::operator<=( const Fixed& other ) {
	if (this->getRawBits() <= other.getRawBits())
		return (true);
	return (false);
};

bool Fixed::operator>=( const Fixed& other ) {
	if (this->getRawBits() >= other.getRawBits())
		return (true);
	return (false);
};

bool Fixed::operator==( const Fixed& other ) {
	if (this->getRawBits() == other.getRawBits())
		return (true);
	return (false);
};

bool Fixed::operator!=( const Fixed& other ) {
	if (this->getRawBits() != other.getRawBits())
		return (true);
	return (false);
};

/* member functions	*/


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

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if (a.num < b.num) {
		return (a);
	} else {
		return (b);
	}
}

Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if (a.num < b.num) {
		return (const_cast<Fixed&>(a));
	} else {
		return (const_cast<Fixed&>(b));
	}
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if (a.num > b.num) {
		return (a);
	} else {
		return (b);
	}
}

Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if (a.num > b.num) {
		return (const_cast<Fixed&>(a));
	} else {
		return (const_cast<Fixed&>(b));
	}
}

/* others */


int	round(float num) {
	return ((int)(num + 0.5));
}

std::ostream
& operator<<(std::ostream& os, const Fixed& var) {
  os << var.toFloat();
  return os;
}
