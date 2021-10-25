/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 23:17:23 by pmedina-          #+#    #+#             */
/*   Updated: 2021/10/25 19:03:15 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

const Fixed pv(Point const p, Point const p1, Point const p2) {

	Fixed px = p.get_x();
	Fixed p1x = p1.get_x();
	Fixed p2x = p2.get_x();
	Fixed py = p.get_y();
	Fixed p1y = p1.get_y();
	Fixed p2y = p2.get_y();
	
	Fixed v1x = px - p1x;
	Fixed v1y = py - p1y;
	Fixed v2x = px - p2x;
	Fixed v2y = py - p2y;
	
	return (v1x * v2y - v2x * v1y);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {

	Fixed zero = Fixed();
	Fixed p1 = pv(point, a, b);
	Fixed p2 = pv(point, b, c);
	Fixed p3 = pv(point, c, a);

	if (zero > p1 && zero > p1 && zero > p2 && zero > p3) {
		return true;
	}
	if (zero < p1 && zero < p1 && zero < p2 && zero < p3) {
		return true;
	}
	return false;
}
