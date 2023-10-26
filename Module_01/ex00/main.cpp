/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:51:44 by xadabunu          #+#    #+#             */
/*   Updated: 2023/09/07 12:56:15 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "test using newZombie: " << std::endl;

	Zombie	*ptr;
	ptr = newZombie("Andrew");
	ptr->announce();
	delete ptr;
	
	std::cout << "test using randomChump: " << std::endl;
	
	randomChump("Max");

	return (0);
}
