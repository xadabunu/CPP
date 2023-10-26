/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 00:39:38 by xadabunu          #+#    #+#             */
/*   Updated: 2023/10/24 00:39:38 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl
{
	private:
		void	debug() const;
		void	info() const;
		void	warning() const;
		void	error() const;

		void	(Harl::* functions[4])(void) const = {
				&Harl::debug,
				&Harl::info,
				&Harl::warning,
				&Harl::error
		};

		const std::string	levels[4] = {
				"DEBUG",
				"INFO",
				"WARNING",
				"ERROR"
		};

	public:
		Harl();
		void	complain(std::string level) const;
};

#endif
