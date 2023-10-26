/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 00:39:29 by xadabunu          #+#    #+#             */
/*   Updated: 2023/10/24 00:39:29 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{ }

void	Harl::complain(const std::string level) const
{
	for (int i = 0; i < 4; ++i)
	{
		if (level == this->levels[i])
			return (this->*functions[i])();
	}
	std::cout << "You're just typing random things aren't you ?" << std::endl;
}

void	Harl::debug() const
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-specialketchup burger.\n"
				 "I really do!" << std::endl;
}

void	Harl::info() const
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\n"
				 "You didn’t put enough bacon in my burger!\nIf you did, I "
				 "wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning() const
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been "
				 "coming for years whereas you started working here "
				 "since last month." << std::endl;
}

void	Harl::error() const
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
