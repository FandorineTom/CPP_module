#include "Enemy.hpp"

Enemy::Enemy() : _hp(0), _type("NO TYPE") {}

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type) {}

Enemy::Enemy(const Enemy &copy_enemy) {*this = copy_enemy;}

Enemy &Enemy::operator=(const Enemy &assign_enemy) {
	_hp = assign_enemy._hp;
	_type = assign_enemy._type;
	return (*this);
}

int			Enemy::getHP() const {return _hp;}
std::string	Enemy::getType() const {return _type;}

void		Enemy::takeDamage(int damage) {(void)damage;}

Enemy::~Enemy() {}
