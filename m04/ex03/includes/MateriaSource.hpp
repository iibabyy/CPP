/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:34:58 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/09 20:23:13 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include "IMaterialSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include <cstring>

class MateriaSource:
public IMateriaSource
{
	private:
		AMateria* book[4];
		void clear_book( void );
	public:
		~MateriaSource();
		MateriaSource();
		MateriaSource( const MateriaSource& m );
		MateriaSource& operator=( const MateriaSource& m );
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif