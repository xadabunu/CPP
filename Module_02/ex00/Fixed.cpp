/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:11:44 by xadabunu          #+#    #+#             */
/*   Updated: 2023/10/26 12:40:28 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	value = 0;
}

Fixed::Fixed(const Fixed& fixed)
{
	value = fixed.value;
}

void	operator=(const Fixed& fixed)
{
	this.value = fixed.value;
}

~Fixed(void)
{
	std::cout << "fixed with value " + value + "is being destroyed" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	
}

void	setRawBits(int const raw)
{
	
}
