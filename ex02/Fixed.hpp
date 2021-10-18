/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:04:22 by pmedina-          #+#    #+#             */
/*   Updated: 2021/10/18 22:11:26 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int _value;
		static const int fractionalBits = 8;
	
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed&);
		Fixed(const int intValue);
		Fixed(const float floatValue);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;Fixed& operator=(Fixed const &copy);
		
		/* Operators & ex02 */

		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);
		bool operator<(Fixed const &value) const;
		bool operator>(Fixed const &value) const;
		bool operator<=(Fixed const &value) const;
		bool operator>=(Fixed const &value) const;
		bool operator==(Fixed const &value) const;
		bool operator!=(Fixed const &value) const;
		Fixed operator+(Fixed const &value);
		Fixed operator-(Fixed const &value);
		Fixed operator*(Fixed const &value);
		Fixed operator/(Fixed const &value);

		static const Fixed& min(Fixed const &a, Fixed const &b);
		static const Fixed& max(Fixed const &a, Fixed const &b);
		static Fixed& min(Fixed &a, Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
};

std::ostream& operator<<(std::ostream &os, Fixed const &fixed);
const Fixed& min(Fixed const &a, Fixed const &b);
const Fixed& max(Fixed const &a, Fixed const &b);
Fixed& min(Fixed &a, Fixed &b);
Fixed& max(Fixed &a, Fixed &b);

#endif
