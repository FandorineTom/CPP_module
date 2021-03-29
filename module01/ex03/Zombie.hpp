#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string _name;
		std::string _type;
	
	public:
	Zombie();
	
	Zombie(const std::string &zombie_name, const std::string &zombie_type);
	std::string get_name() const;
	std::string get_type() const;
	void		announce() const;
	void		randomChump();

	~Zombie();
};

#endif