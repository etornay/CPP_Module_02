/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:48:54 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/19 18:31:22 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	private:
			int	value;
			static const int	bits = 8;
	public:
			Fixed(void);
			Fixed(const Fixed &copy);
			Fixed(const int i);
			Fixed(const float f);
			Fixed &operator = (const Fixed &other);
			bool operator < (const Fixed &other);
			bool operator > (const Fixed &other);
			bool operator <= (const Fixed &other);
			bool operator >= (const Fixed &other);
			bool operator == (const Fixed &other);
			bool operator != (const Fixed &other);
			Fixed operator + (const Fixed &other);
			Fixed operator - (const Fixed &other);
			Fixed operator * (const Fixed &other);
			Fixed operator / (const Fixed &other);
			Fixed &operator ++ (void);
			Fixed &operator -- (void);
			Fixed operator ++ (int);
			Fixed operator -- (int);
			~Fixed(void);
			
			int getRawBits(void) const;
			void setRawBits(int const raw);
			int toInt(void) const;
			float toFloat(void) const;
			static Fixed &min(Fixed &a, Fixed &b);
			static Fixed &max(Fixed &a, Fixed &b);
			static const Fixed &min(const Fixed &a, const Fixed &b);
			static const Fixed &max(const Fixed &a, const Fixed &b);
};
std::ostream &operator << (std::ostream &out, const Fixed &nbr);
#endif