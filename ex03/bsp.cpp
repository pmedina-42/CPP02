/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 23:17:23 by pmedina-          #+#    #+#             */
/*   Updated: 2021/10/23 18:06:21 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

void vdir(Point const a, Point const b, Point const c, Point const p) {

	Fixed ax = a.get_x();
	Fixed bx = b.get_x();
	Fixed cx = c.get_x();
	Fixed ay = a.get_y();
	Fixed by = b.get_y();
	Fixed cy = c.get_y();
	Fixed px = p.get_x();
	Fixed py = p.get_y();
	
	Fixed v1x(ax - bx);
	Fixed v1y(ay - by);
	Fixed v2x(ax - cx);
	Fixed v2y(ay - cy);
	Fixed v3x(ax - px);
	Fixed v3y(ay - py);

	
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {

	// Pongo una referencia en el 0,0 para hacer los calculos
	Point zero = Point();
	(void)point, (void)a, (void)b, (void)c;
	//Fixed area = (a.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - b.get_y())) / 2;

	return true;
}
