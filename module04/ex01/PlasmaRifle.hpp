#ifndef PLASMARIFLE_H
#define PLASMARIFLE_H

#include "AWeapon.hpp"


class PlasmaRifle : public AWeapon {
	public:
		PlasmaRifle();
		PlasmaRifle(std::string const &name, int apcost, int damage);
		PlasmaRifle(const PlasmaRifle &copy_aweapon);
		PlasmaRifle &operator=(const PlasmaRifle &assign_aweapon);
		virtual ~PlasmaRifle();

		void			setName(std::string name = "Plasma Rifle");
		void			setAttackSound(std::string sound = "* piouuu piouuu piouuu *");
		void			setAPcost(int apcost = 5);
		void			setDamage(int damage = 21);
		virtual void	attack() const;
};

#endif