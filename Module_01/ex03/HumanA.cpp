/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 22:15:35 by xadabunu          #+#    #+#             */
/*   Updated: 2023/10/08 22:15:35 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& weapon)
		: _name(name), _weapon(weapon)
{
	this->_name = name;
	this->_weapon = weapon;
}

void	HumanA::setWeapon(const Weapon& weapon)
{
	this->_weapon = weapon;
}

void	HumanA::attack()
{
	std::string	str = _name + " attacks with their " + _weapon.getType();
	std::cout << str << std::endl;
}
