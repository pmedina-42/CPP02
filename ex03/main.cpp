/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:49:50 by pmedina-          #+#    #+#             */
/*   Updated: 2021/10/25 19:08:55 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main (void) {
	
	Point a(1, 0);
	Point b(2, 2);
	Point c(3.5f, 0);
	Point p(2, 0.5f);
	//Point p(1, 1);
	//Point p(1, 0);
	
	std::cout << std::endl << "point a: x=" << a.get_x() << ", y=" << a.get_y() << std::endl;
	std::cout << "point b: x=" << b.get_x() << ", y=" << b.get_y() << std::endl;
	std::cout << "point c: x=" << c.get_x() << ", y=" << c.get_y() << std::endl << std::endl;
	std::cout << "point p (x="  << p.get_x() << ",y=" << p.get_y() << ") is inside the triangle: ";
	bsp(a, b, c, p) ? std::cout << "true\n" : std::cout << "false\n";

	return 0;
}

