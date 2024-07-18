/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:48:27 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/18 17:16:10 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	value = copy.value;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	value = (i << bits);
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(f * (1 << bits));
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		value = other.value;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}
void Fixed::setRawBits(int const raw)
{
	value = raw;
}

int Fixed::toInt(void) const
{
	return (value >> bits); /* Divide value entre 256 */
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(value) / (1 << bits); /* (1 << bits) = 256 */
}

std::ostream &operator << (std::ostream &out, const Fixed &nbr)
{
	out << nbr.toFloat();
	return (out);
}
