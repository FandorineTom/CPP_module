#pragma once

#include "ISpaceMraine.hpp"

class TacticalMarine : public ISpaceMarine {
	private:
		std::string _name;

	public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine &copy);
	TacticalMarine &operator=(const TacticalMarine &assign);
	~TacticalMarine();

	virtual				ISpaceMarine *clone() const;
	virtual void		battleCry() const;
	virtual void		rangedAttack() const;
	virtual void		meleeAttack() const;
};