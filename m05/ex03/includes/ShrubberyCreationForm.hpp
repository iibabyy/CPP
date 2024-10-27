/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:13:05 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/27 16:37:32 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATION_HPP
# define SHRUBBERYCREATION_HPP

#include "AForm.hpp"

#include <fstream>
#include <iostream>

class ShrubberyCreationForm:
public AForm {
	private:
		std::string	target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm( std::string	target );
		~ShrubberyCreationForm();
		ShrubberyCreationForm( const ShrubberyCreationForm& other );
		ShrubberyCreationForm& operator=( const ShrubberyCreationForm& other );

		void	shrubberyCreation( void ) const;
		void	executeCapacity( void ) const;
};

#endif