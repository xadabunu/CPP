/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 00:39:39 by xadabunu          #+#    #+#             */
/*   Updated: 2023/10/24 00:39:39 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int const argc, char const *const *argv)
{
	Harl harl;

	if (argc == 2)
		harl.complain(argv[1]);
	else
		std::cout << "Harl takes one and only one level "
					 "of complaint as a paremeter." << std::endl;
	return 0;
}
