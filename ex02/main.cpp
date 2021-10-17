/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:49:50 by pmedina-          #+#    #+#             */
/*   Updated: 2021/10/17 23:04:15 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main (void) {
	
	Fixed a;
	Fixed f1(5.05f), f2(2);
	Fixed const b(f1 * f2);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl << std::endl;

	std::cout << b << std::endl;

	//std::cout << Fixed::max(a, b) << std::endl;

	return 0;
}

// OUTPUT //
/*
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016
*/
