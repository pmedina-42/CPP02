/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:04:22 by pmedina-          #+#    #+#             */
/*   Updated: 2021/10/17 23:09:37 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int value;
		static const int fractionalBits = 8;
	
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed&);
		Fixed(const int intValue);
		Fixed(const float floatValue);
		Fixed& operator=(Fixed const &copy);
		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);
		Fixed operator*(Fixed const &value);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream &os, Fixed const &fixed);

#endif
