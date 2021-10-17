/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:13:55 by pmedina-          #+#    #+#             */
/*   Updated: 2021/10/17 22:13:04 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(int intValue) : value(intValue * (1 << this->fractionalBits)){
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float floatValue) : value(roundf(floatValue * (1 << this->fractionalBits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &copy) {
	std::cout << "Asignation operator called" << std::endl;
	value = copy.getRawBits();
	return *this;
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
