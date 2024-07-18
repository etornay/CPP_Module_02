/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:58:52 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/18 17:28:52 by etornay-         ###   ########.fr       */
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

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}
Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		value = other.value;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
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