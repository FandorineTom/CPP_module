#pragma once

#include "Amateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria *_materia[4];

		Character();

	public:
		Character(std::string name);
		Character(const Character &copy);
		Character &operator=(const Character &assign);
		~Character();

		std::string const &getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};
