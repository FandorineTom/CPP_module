#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria	*_materia[4];
		int			_materia_num;

	public:
	MateriaSource();
	MateriaSource(const MateriaSource &copy);
	MateriaSource &operator=(const MateriaSource &assign);
	~MateriaSource();

	virtual void		learnMateria(AMateria *materia);
	virtual AMateria	*createMateria(std::string const &type);
};