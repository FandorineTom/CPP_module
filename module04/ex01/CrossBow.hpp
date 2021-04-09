#pragma once

#include "AWeapon.hpp"


class CrossBow : public AWeapon {
	public:
		CrossBow();
		CrossBow(std::string const &name, int apcost, int damage);
		CrossBow(const CrossBow &copy_aweapon);
		CrossBow &operator=(const CrossBow &assign_aweapon);
		virtual ~CrossBow();

		void			setName(std::string name = "Crossbow");
		void			setAttackSound(std::string sound = "* wshhhooohhh... CHPOK! *");
		void			setAPcost(int apcost = 12);
		void			setDamage(int damage = 35);
		virtual void	attack() const;
};