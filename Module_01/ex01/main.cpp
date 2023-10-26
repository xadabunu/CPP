/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:34:44 by xadabunu          #+#    #+#             */
/*   Updated: 2023/10/08 18:34:44 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	int size = 5;
	Zombie *horde = zombieHorde(size, "Jack");

	for (int i = 0; i < size; ++i)
		horde[i].announce();
	delete[] horde;
	return 0;
}
