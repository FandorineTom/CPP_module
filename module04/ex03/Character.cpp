#include "Character.hpp"

Character::Character() : _name("no one") {}

Character::Character(std::string name) : _name(name) {}

Character::Character(const Character &copy) {*this = copy;}

Character &Character::operator=(const Character &assign) {
	for (int i = 0; i < 4; i++) {
		if (_materia[i])
			delete _materia[i];
		_materia[i] = NULL;
	}
	_name = assign._name;
	for (int i = 0; i < 4; i++)
		_materia[i] = assign._materia[i];
	return *this;
}

std::string const &Character::getName() const {return _name;}

void	Character::equip(AMateria *materia) {
	int res = -1;
	for (int i = 0; i < 4; i++) {
		if (_materia[i] == materia)
			return ;
		if (!_materia[i] && res == -1)
			res = i;
	}
	if (res >= 0)
		_materia[res] = materia;
}

void	Character::unequip(int idx) {
	if (_materia[idx])
		_materia[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target) {
	if (idx < 4 && _materia[idx])
		_materia[idx]->use(target);
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (_materia[i])
			delete _materia[i];
		_materia[i] = NULL;
	}
}