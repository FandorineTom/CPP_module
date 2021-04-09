#pragma once

#include "ICharacter.hpp"

class AMateria
{
	protected:
		unsigned int	_xp;
		std::string		_type;

		AMateria();

	public:
		AMateria(std::string const & type);
		AMateria(const AMateria &copy);
		AMateria &operator=(const AMateria &assign);
		virtual ~AMateria();

		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);	
};