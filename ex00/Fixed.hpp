/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:03:57 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/19 15:01:30 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
			int	value;
			static const int	bits = 8;
	public:
			Fixed(void);
			Fixed(const Fixed &copy);
			Fixed &operator = (const Fixed &other);
			~Fixed(void);
			
			int getRawBits(void) const;
			void setRawBits(int const raw);
};
#endif