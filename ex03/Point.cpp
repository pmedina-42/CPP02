/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 22:37:49 by pmedina-          #+#    #+#             */
/*   Updated: 2021/10/19 23:43:07 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::~Point() { }

Point::Point() : _x(0), _y(0) { }

Point::Point(const Point &p) {
	*this = p;
}

Point::Point(const float x, const float y) {
	Fixed a(x), b(y);
	_x.setRawBits(a.getRawBits());
	_y.setRawBits(b.getRawBits());
	return ;
}

Point& Point::operator=(Point const &p) {
	_x.setRawBits(p._x.getRawBits());
	_y.setRawBits(p._x.getRawBits());
	return *this;
}

const Fixed& Point::get_x(void) {
	return _x;
}

void Point::set_x(const Fixed& f) {
	_x = f;
	return ;
}

const Fixed& Point::get_y(void) {
	return _y;
}

void Point::set_y(const Fixed& f) {
	_y = f;
	return ;
}
