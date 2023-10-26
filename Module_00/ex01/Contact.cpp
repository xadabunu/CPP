/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:24:11 by xadabunu          #+#    #+#             */
/*   Updated: 2023/09/06 17:54:38 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::Contact(std::string f_name, std::string l_name, std::string n_name,
			std::string number, std::string secret) : first_name(f_name), 
			last_name(l_name), nickname(n_name), phone_number(number),
			secret(secret)
{
	// this->first_name = first_name;
	// this->last_name = last_name;
	// this->nickname = nickname;
	// this->phone_number = phone_number;
	// this->secret = secret;
}

void	Contact::print_column(std::string field) const
{
	if (field.size() > 10)
		field = field.substr(0, 9).append(".");
	for (int i = 0; i + field.size() < 10; ++i)
		std::cout << " ";
	std::cout << field;
}

void	Contact::display(void) const
{
	this->print_column(this->first_name);
	std::cout << "|";
	this->print_column(this->last_name);
	std::cout << "|";
	this->print_column(this->nickname);
}

void	Contact::display_detailed(void) const
{
	std::cout << "first name\t: " << this->first_name << std::endl;
	std::cout << "last name\t: " << this->last_name << std::endl;
	std::cout << "nickname\t: " << this->nickname << std::endl;
	std::cout << "phone number\t: " << this->phone_number << std::endl;
	std::cout << "darkest secret\t: " << this->secret << std::endl;
}

Contact::~Contact(void)
{
}