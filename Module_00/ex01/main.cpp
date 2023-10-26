/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 20:17:17 by xadabunu          #+#    #+#             */
/*   Updated: 2023/09/06 16:49:27 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstring>
#include <iostream>

int	main(void)
{
	PhoneBook book{};
	std::string cmd;
	std::string new_contact[5];
	
	while (cmd.compare("EXIT") != 0)
	{
		std::cout << "Enter \"ADD\" to add a contact, \"SEARCH\" to display ";
		std::cout << "contact info or \"EXIT\" to leave." << std::endl;
		std::cout << "> ";
		std::getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
		{
			std::cout << "first name :\n> ";
			std::getline(std::cin, new_contact[0]);
			std::cout << "last name :\n> ";
			std::getline(std::cin, new_contact[1]);
			std::cout << "nickname :\n> ";
			std::getline(std::cin, new_contact[2]);
			std::cout << "phone number :\n> ";
			std::getline(std::cin, new_contact[3]);
			std::cout << "darkest secret :\n> ";
			std::getline(std::cin, new_contact[4]);
			book.add({
				new_contact[0],
				new_contact[1],
				new_contact[2],
				new_contact[3],
				new_contact[4]
			});
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			if (book.display() == 1)
			{
				std::cout << "Enter the index of the contact you want ";
				std::cout << "to see the informations of.\n> ";
				std::getline(std::cin, cmd);
				if (cmd.size() == 1)
					book.search(cmd.at(0) - '0');
				else
					std::cout << "Invalid input." << std::endl;
			}
		}
		else if (cmd.compare("EXIT") != 0)
			std::cout << "Unrecognised command." << std::endl;
	}
	return (0);
}