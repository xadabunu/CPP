/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:15:16 by xadabunu          #+#    #+#             */
/*   Updated: 2023/10/26 12:15:16 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int	value;
		static int const nfbits = 8;
	
	public:
		Fixed(void);
		Fixed(const Fixed& fixed);
		//copy assignment operator overload ?
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
}

#endif
