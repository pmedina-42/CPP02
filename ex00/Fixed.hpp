/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:04:22 by pmedina-          #+#    #+#             */
/*   Updated: 2021/10/17 20:42:42 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {
	private:
		int value;
		static const int fractionalBits = 8;
	
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed&);
		Fixed& operator=(Fixed const &copy);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
