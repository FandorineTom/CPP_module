#pragma once

#include "ISpaceMraine.hpp"

class AssaultTerminator : public ISpaceMarine {
	private:
		std::string _name;

	public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &copy);
	AssaultTerminator &operator=(const AssaultTerminator &assign);
	~AssaultTerminator();

	virtual				ISpaceMarine *clone() const;
	virtual void		battleCry() const;
	virtual void		rangedAttack() const;
	virtual void		meleeAttack() const;
};