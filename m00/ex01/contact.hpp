/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:59:28 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/07 17:12:35 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class	Contact
{
	public:
		void 	display_info(int index);
		void	init();
		void	set_last_name(std::string arg);
		void	set_first_name(std::string arg);
		void	set_nickname(std::string arg);
		void	set_phone_number(std::string arg);
		void	set_darkest_secret(std::string arg);
		void	list_infos(void);
		Contact();
		~Contact();
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_num;
		std::string	darkest_secret;
};

#endif