/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 22:15:56 by xadabunu          #+#    #+#             */
/*   Updated: 2023/10/08 22:15:56 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>
#include <utility>

HumanB::HumanB(std::string name) : _name(std::move(name))
{ }

void	HumanB::setWeapon(Weapon *weapon)
{
	this->_weapon = weapon;
}

void	HumanB::attack()
{
	std::string str = _name + " attacks ";
	str += _weapon == nullptr ? "bare handed" :
			"with their " + _weapon->getType();
	std::cout << str << std::endl;
}
