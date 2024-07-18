/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:48:54 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/18 17:49:29 by etornay-         ###   ########.fr       */
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
			Fixed &operator=(const Fixed &other);
			~Fixed(void);
			
			int getRawBits(void) const;
			void setRawBits(int const raw);
			int toInt(void) const;
			float toFloat(void) const;
};
std::ostream &operator << (std::ostream &out, const Fixed &nbr);
#endif