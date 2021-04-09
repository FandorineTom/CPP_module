#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _materia_num(0) {}

MateriaSource::MateriaSource(const MateriaSource &copy) {*this = copy;}

MateriaSource &MateriaSource::operator=(const MateriaSource &assign) {
	for (int i = 0; i < 4; i++) {
		if (_materia[i])
			delete _materia[i];
		_materia[i] = NULL;
	}
	for (int i = 0; i < 4; i++)
		_materia[i] = assign._materia[i]->clone();
	return *this;
}

void	MateriaSource::learnMateria(AMateria *materia) {
	if (_materia_num < 4) {
		_materia[_materia_num] = materia->clone();
		_materia_num++;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type) {
	if (_materia_num) {
		for (int i = 0; i <= (_materia_num - 1); i++) {
			if (_materia[i]->getType() == type)
				return _materia[i]->clone();
		}
	}
	return NULL;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (_materia[i])
			delete _materia[i];
		_materia[i] = NULL;
	}
}