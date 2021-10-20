/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:49:50 by pmedina-          #+#    #+#             */
/*   Updated: 2021/10/20 23:25:53 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const &a, Point const &b, Point const &c, Point const &point);

int main (void) {
	
	Point a(1, 0);
	Point b(2, 2);
	Point c(3.5f, 0);
	Point point(1, 1);
	bsp(a, b, c, point) ? std::cout << "true\n" : std::cout << "false\n";

	return 0;
}

