/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:51:46 by xadabunu          #+#    #+#             */
/*   Updated: 2023/10/08 18:40:41 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
	private:
		std::string	name;
	
	public:
		Zombie(std::string name);
		void	announce(void);
		~Zombie(void);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif
