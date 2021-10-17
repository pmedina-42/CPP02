/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:13:55 by pmedina-          #+#    #+#             */
/*   Updated: 2021/10/17 23:09:31 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed() : value(0) {
}

Fixed::~Fixed() {
}

Fixed::Fixed(const Fixed& fixed) {
	*this = fixed;
}

Fixed::Fixed(int intValue) : value(intValue * (1 << this->fractionalBits)){
}

Fixed::Fixed(float floatValue) : value(roundf(floatValue * (1 << this->fractionalBits))) {
}

Fixed& Fixed::operator=(Fixed const &copy) {
	value = copy.getRawBits();
	return *this;
}

Fixed Fixed::operator++() {
	value++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed copy(*this);
	this->operator++();
	return copy;
}

Fixed Fixed::operator--() {
	value--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed copy(*this);
	value--;
	return copy;
}

Fixed Fixed::operator*(Fixed const &fixed) {
	Fixed f;
	f.setRawBits(value * fixed.value);
	return f;
}

std::ostream& operator<<(std::ostream &os, Fixed const &fixed) {
	os << fixed.toFloat();
	return os;
}

int Fixed::getRawBits() const {
	return value;
}

void Fixed::setRawBits(int rawBits) {
	value = rawBits;
	return ;
}

float Fixed::toFloat(void) const {
	return ((float)value / (float)(1 << this->fractionalBits));
}

int Fixed::toInt(void) const {
	return value / (1 << this->fractionalBits);
}
