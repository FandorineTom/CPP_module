#ifndef VICTIM_H
#define VICTIM_H

#include <iostream>
#include <string>

class Victim {
	protected:
		std::string _name;
	
		Victim();

	public:
		Victim(std::string name);
		Victim(const Victim &copy_victim);
		~Victim();

		Victim &operator=(const Victim &assign_victim);

		const std::string	&getName() const;
		void				introduction() const;
		virtual void		getpolymorphed() const;
};

std::ostream &operator<<(std::ostream &s, const Victim &victim);

#endif