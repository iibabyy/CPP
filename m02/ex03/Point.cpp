/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:49:46 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/03 00:25:19 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* Constructors, Destructors */

Point::Point() {
	this->x = 0;
	this->y = 0;
};
Point::~Point() {
	
};

Point::Point(const float x, const float y) {
	this->x = Fixed(x);
	this->y = Fixed(y);
}

Point::Point( const Point& other ) {
	this->x = other.x;
	this->y = other.y;
}

Point& Point::operator=( const Point& other ) {
	this->x = other.x;
	this->y = other.y;
	return (*this);
}

/* Member functions */

float Point::get_x( void ) {
	return this->x.toFloat();
}

float Point::get_y() {
	return this->y.toFloat();
}
