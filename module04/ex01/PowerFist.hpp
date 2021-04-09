#pragma once

#include "AWeapon.hpp"


class PowerFist : public AWeapon {
	public:
		PowerFist();
		PowerFist(std::string const &name, int apcost, int damage);
		PowerFist(const PowerFist &copy_aweapon);
		PowerFist &operator=(const PowerFist &assign_aweapon);
		virtual ~PowerFist();

		void			setName(std::string name = "Power Fist");
		void			setAttackSound(std::string sound = "* pschhh... SBAM! *");
		void			setAPcost(int apcost = 8);
		void			setDamage(int damage = 50);
		virtual void	attack() const;
};