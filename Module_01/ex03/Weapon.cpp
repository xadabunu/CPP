/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 22:15:13 by xadabunu          #+#    #+#             */
/*   Updated: 2023/10/08 22:15:13 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon()
{ }

Weapon::Weapon(std::string type) : type(type)
{ }

std::string& Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType(std::string newType)
{
	this->type = newType;
}

Weapon::~Weapon()
= default;
