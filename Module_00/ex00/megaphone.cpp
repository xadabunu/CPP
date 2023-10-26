/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 21:47:58 by xadabunu          #+#    #+#             */
/*   Updated: 2023/08/10 23:57:25 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	upperstr(char *str)
{
	if (str == NULL)
		return ;
	for (int i = 0 ; str[i] != '\0' ; ++i)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] += 'A' - 'a';
	}

	std::cout << str;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; argv[i] != NULL; ++i)
			upperstr(argv[i]);
		std::cout << std::endl;
	}
	return (0);
}
