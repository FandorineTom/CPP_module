#pragma once

#include "ISpaceMraine.hpp"
#include "ISquad.hpp"

class Squad : public ISquad {
	private:
		ISpaceMarine	**_squad;
		int				_count;

	public:
		Squad();
		Squad(const Squad &copy_squad);
		Squad *operator=(const Squad &assign_squad);
		~Squad();

		virtual	int getCount() const;
		virtual ISpaceMarine *getUnit(int i) const;
		virtual int push(ISpaceMarine *squad);

		void	deleteSquad(ISpaceMarine ** squad, int num);
		void	dupSquad(ISpaceMarine **dst, ISpaceMarine **src, int num);
};