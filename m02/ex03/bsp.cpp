/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:53:57 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/03 00:46:27 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	float	side1 = side(a, b, point);
	float	side2 = side(b, c, point);
	float	side3 = side(c, a, point);

	if (side1 < 0 && side2 < 0 && side3 < 0) {
		return (true);
	} else if (side1 > 0 && side2 > 0 && side3 > 0) {
		return (true);
	} else {
		return (false);
	}
}


//(vector product)
// > 0: to the left of the segment
// < 0: to the right of the segment
// = 0: on the segment
float	side(Point A, Point B, Point P) {
	float BAdx = B.get_x() - A.get_x();
	float BAdy = B.get_y() - A.get_y();
	float PAdx = P.get_x() - A.get_x();
	float PAdy = P.get_y() - A.get_y();

	return (BAdx * PAdy - BAdy * PAdx);
}