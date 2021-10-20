/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 23:17:23 by pmedina-          #+#    #+#             */
/*   Updated: 2021/10/20 23:31:27 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const &a, Point const &b, Point const &c, Point const &point) {

	// Pongo una referencia en el 0,0 para hacer los calculos
	Point zero = Point();
	(void)point;
	Fixed ax = a.get_x();
	Fixed bx = b.get_x();
	Fixed cx = c.get_x();
	Fixed ay = a.get_y();
	Fixed by = b.get_y();
	Fixed cy = c.get_y();
	
	
	Fixed v1x(ax - bx);
	Fixed v1y(ay - by);
	Fixed v2x(ax - cx);
	Fixed v2y(ay - cy);

	//Fixed area = (a.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - b.get_y())) / 2;

	std::cout << v1x << std::endl;
	std::cout << v1y << std::endl;
	std::cout << v2x << std::endl;
	std::cout << v2y << std::endl;
	return true;
}
