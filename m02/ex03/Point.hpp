/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:49:46 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/03 00:26:01 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

struct Point {
	private:
		Fixed x;
		Fixed y;
	public:
		Point();
		~Point();
		Point(const float x, const float y);
		Point( const Point& other );
		Point& operator=( const Point& other );

		float get_x( void );
		float get_y( void );
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
float	side(Point A, Point B, Point P);

#endif