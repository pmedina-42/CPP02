/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:49:50 by pmedina-          #+#    #+#             */
/*   Updated: 2021/10/18 22:32:20 by pmedina-         ###   ########.fr       */
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
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	
	/*std::cout << std::endl << "Mis pruebas:" << std::endl << std::endl;
	
	if (a < b) std::cout << "A es menor que b: " << std::endl;
	if (b > a) std::cout << "B es mayor que a: " << std::endl;
	if (a != b) std::cout << "A es distinto de B" << std::endl;

	Fixed c(a);

	if (c == a) std::cout << "C es igual que A" << std::endl;
	if (c <= b) std::cout << "C es menor o igual que B" << std::endl;
	if (b >= a) std::cout << "B es mayor o igual que A" << std::endl;

	Fixed d(f1 + f2);
	std::cout << "Fixed d(f1+f2) " << d << std::endl;
	
	Fixed e(f1 - f2);
	std::cout << "Fixed e(f1-f2) " << e << std::endl;
	
	Fixed f(f1 / f2);
	std::cout << "Fixed f(f1/f2) = " << f << std::endl;
	std::cout << "f -- = " << f-- << std::endl;
	std::cout << "f = " << f << std::endl;
	std::cout << "-- f = " << --f << std::endl;
	std::cout << "f = " << f << std::endl;
	std::cout << "El minimo entre a y f es: " << Fixed::min(a, f) << std::endl;*/

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
