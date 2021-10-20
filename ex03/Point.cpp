/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 22:37:49 by pmedina-          #+#    #+#             */
/*   Updated: 2021/10/20 23:26:29 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::~Point() { }

Point::Point() : _x(0), _y(0) { }

Point::Point(const Point &p) {
	*this = p;
}

Point::Point(Point &p) {
	*this = p;
}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y)) { }

Point& Point::operator=(Point &p) {
	return p;
}

const Point& Point::operator=(const Point &p) {
	return p;
}

const Fixed& Point::get_x(void) const {
	return _x;
}

const Fixed& Point::get_y(void) const {
	return _y;
}
