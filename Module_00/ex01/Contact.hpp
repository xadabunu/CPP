/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:21:17 by xadabunu          #+#    #+#             */
/*   Updated: 2023/09/06 17:54:41 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	secret;
		void	print_column(std::string field) const;

	public:
		Contact(void);
		Contact(std::string first_name,
				std::string last_name,
				std::string nickname,
				std::string phone_number,
				std::string secret);
		void	display(void) const;
		void	display_detailed(void) const;
		~Contact(void);
};

#endif