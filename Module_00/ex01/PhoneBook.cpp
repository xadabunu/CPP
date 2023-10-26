/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:17:13 by xadabunu          #+#    #+#             */
/*   Updated: 2023/09/06 17:53:03 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	size = 0;
}

void	PhoneBook::add(Contact contact)
{
	if (size < 8)
	{
		book[size] = contact;
		++size;
	}
	else
	{
		for (int i = 0; i < size - 1; ++i)
			book[i] = book[i + 1];
		book[size - 1] = contact;
	}
	std::cout << "Contact saved!" << std::endl;
}

void	PhoneBook::search(int index) const
{
	if (index < 1 || index > size)
		std::cout << "This index doesn't exist!" << std::endl;
	else
		book[index - 1].display_detailed();
	std::cout << '\n';
}

int		PhoneBook::display() const
{
	std::cout << '\n';
	if (size == 0)
	{
		std::cout << "Your phonebook is empty!" << std::endl;
		return (0);
	}
	std::cout << "index|first name|last name |nickname\n";
	for (int i = 0; i < size; ++i)
	{
		std::cout << "    " << i + 1 << "|";
		book[i].display();
		std::cout << std::endl;
	}
	std::cout << '\n';
	return (1);
}
