/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 22:33:00 by pmedina-          #+#    #+#             */
/*   Updated: 2021/10/19 23:30:51 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class Point {
	private:
		Fixed const _x;
		Fixed const _y;
	
	public:
		Point();
		~Point();
		Point(Point const &p);
		Point(const float x, const float y);
		Point& operator=(const Point &p);
		const Fixed& get_x(void);
		void set_x(const Fixed& f);
		const Fixed& get_y(void);
		void set_y(const Fixed& f);


};

#endif
