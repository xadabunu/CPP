/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:28:39 by xadabunu          #+#    #+#             */
/*   Updated: 2023/10/08 21:28:39 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	const std::string str = "HI THIS IS BRAIN";
	const std::string *stringPTR = &str;
	const std::string &stringREF = str;

	std::cout << "address of the variable : " << &str << std::endl;
	std::cout << "address held by stringPTR : " << stringPTR << std::endl;
	std::cout << "address held by stringREF : " << &stringREF << std::endl;

	std::cout << "value of the variable : " << str << std::endl;
	std::cout << "value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF :" << stringREF << std::endl;

	return 0;
}