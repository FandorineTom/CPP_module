#include "Squad.hpp"

Squad::Squad() : _squad(NULL), _count(0) {}

Squad::Squad(const Squad &copy_cquad) : _squad(NULL), _count(0) {*this = copy_cquad;}

Squad *Squad::operator=(const Squad &assign_squad) {
	deleteSquad(_squad, _count);
	_squad = new ISpaceMarine *[assign_squad._count];
	dupSquad(_squad, assign_squad._squad, assign_squad._count);
	_count = assign_squad._count;
	return this;
}

int				Squad::getCount() const {return _count;}
ISpaceMarine	*Squad::getUnit(int i) const {
	if (i >= _count)
		return NULL;
	return _squad[i];
}

int				Squad::push(ISpaceMarine *squad) {
	if (!squad)
		return _count;
	for (int i = 0; i < _count; i++) {
		if (_squad[i] == squad)
			return _count;
	}
	ISpaceMarine **new_squad = new ISpaceMarine* [_count + 1];
	dupSquad(new_squad, _squad, _count);
	delete[] _squad;
	_squad = new_squad;
	_squad[_count] = squad;
	_count++;
	return _count;
}

void	Squad::deleteSquad(ISpaceMarine **squad, int num) {
	if(squad) {
		for (int i = 0; i < num; i++) {
			delete squad[i];
		}
		delete squad;
		squad = NULL;
	}
}

void	Squad::dupSquad(ISpaceMarine **dst, ISpaceMarine **src, int num) {
	for (int i = 0; i < num; i++) {
		dst[i] = src[i];
	}
}

Squad::~Squad() {
	deleteSquad(_squad, _count);
}