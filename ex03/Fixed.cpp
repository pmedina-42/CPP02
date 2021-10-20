/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:13:55 by pmedina-          #+#    #+#             */
/*   Updated: 2021/10/20 21:00:34 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors and destructor

Fixed::Fixed() : _value(0) {
}

Fixed::~Fixed() {
}

Fixed::Fixed(const Fixed& fixed) {
	*this = fixed;
}

Fixed::Fixed(int intValue) : _value(intValue * (1 << this->fractionalBits)){
}

Fixed::Fixed(float floatValue) : _value(roundf(floatValue * (1 << this->fractionalBits))) {
}

// Operators from previous exercises

const Fixed& Fixed::operator=(Fixed const &copy) {
	_value = copy.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream &os, Fixed const &fixed) {
	os << fixed.toFloat();
	return os;
}

// Getter & Setter

int Fixed::getRawBits() const {
	return _value;
}

void Fixed::setRawBits(const int rawBits) {
	_value = rawBits;
	return ;
}

float Fixed::toFloat(void) const {
	return ((float)_value / (float)(1 << this->fractionalBits));
}

int Fixed::toInt(void) const {
	return _value / (1 << this->fractionalBits);
}

// Comparison operators

bool Fixed::operator<(Fixed const &f) const {
	if (_value < f._value)
		return true;
	return false;
}

bool Fixed::operator>(Fixed const &f) const {
	if (_value > f._value)
		return true;
	return false;
}

bool Fixed::operator<=(Fixed const &f) const {
	if (_value <= f._value)
		return true;
	return false;
}

bool Fixed::operator>=(Fixed const &f) const {
	if (_value >= f._value)
		return true;
	return false;
}

bool Fixed::operator==(Fixed const &f) const {
	if (_value == f._value)
		return true;
	return false;
}

bool Fixed::operator!=(Fixed const &f) const {
	if (_value != f._value)
		return true;
	return false;
}

// Pre and post increment & decrement

Fixed Fixed::operator++() {
	_value++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed copy(*this);
	this->operator++();
	return copy;
}

Fixed Fixed::operator--() {
	_value--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed copy(*this);
	_value--;
	return copy;
}

// Arithmetic operators

Fixed Fixed::operator+(Fixed const &fixed) {
	Fixed f;
	f.setRawBits(_value + fixed._value);
	return f;
}

Fixed Fixed::operator-(Fixed const &fixed) {
	Fixed f;
	f.setRawBits(_value - fixed._value);
	return f;
}

Fixed Fixed::operator*(Fixed const &fixed) {
	Fixed f;
	f.setRawBits(_value / (float)(1 << this->fractionalBits) * fixed._value);
	return f;
}

Fixed Fixed::operator/(Fixed const &fixed) {
	Fixed f;
	f.setRawBits(_value * (float)(1 << this->fractionalBits) / fixed._value);
	return f;
}

// Class member functions

const Fixed& Fixed::min(Fixed const &a, Fixed const &b) {
	if (a < b)
		return a;
	return b;
}

const Fixed& Fixed::max(Fixed const &a, Fixed const &b) {
	if (a > b)
		return a;
	return b;
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return a;
	return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return a;
	return b;
}

// External function definitions

const Fixed& min(Fixed const &a, Fixed const &b) {
	if (a < b)
		return a;
	return b;
}

const Fixed& max(Fixed const &a, Fixed const &b) {
	if (a > b)
		return a;
	return b;
}

Fixed& min(Fixed &a, Fixed &b) {
	if (a < b)
		return a;
	return b;
}

Fixed& max(Fixed &a, Fixed &b) {
	if (a > b)
		return a;
	return b;	
}
