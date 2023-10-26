/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 00:33:29 by xadabunu          #+#    #+#             */
/*   Updated: 2023/10/24 00:33:29 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

void	error(int error_no)
{
	if (error_no == 1)
	{	
		std::cout << "Usage: ./prog filename s1 s2" << std::endl;
		std::cout << "where:\t filename is the file to modify." << std::endl;
		std::cout << "\t s1 is the string to replace." << std::endl;
		std::cout << "\t s2 is the string replacing s1. " << std::endl;
	}
	else if (error_no == 2)
		std::cout << "error opening source file." << std::endl;
	else if (error_no == 3)
		std::cout << "error opening destination file." << std::endl;
	exit(2);
}	

int	main(int const argc, char const *const *argv)
{
	if (argc != 4)
		error(1);

	std::ifstream file_from;
	std::ofstream file_to;
	std::string buffer;
	std::string line;
	std::string filename = argv[1];

	file_from.open(argv[1], std::ios::in);
	if (!file_from.is_open())
		error(2);

	file_to.open(filename + ".replace" , std::ios::out);
	
	if (!file_to.is_open())
	{
		file_from.close();
		error(3);
	}

	while (getline(file_from, line))
		buffer += line;;
	file_from.close();

	line = argv[3];
	int	pos = buffer.find(line);

	while (pos != -1)
	{
		file_to << buffer.substr(0, pos);
		buffer.erase(buffer.begin(), buffer.begin() + pos + 1);
		pos = buffer.find(line);
	}
	file_to << buffer.substr(0, pos);
	file_to.close();

	return 0;
}