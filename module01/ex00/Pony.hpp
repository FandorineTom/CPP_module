#ifndef PONY_H
#define PONY_H

#include <iostream>
#include <string>

class	Pony {
public:
	Pony(void);

	std::string nick;
	std::string color;

	~Pony(void);
};

void	ponyOnTheHeap(void);
void	ponyOnTheStack(void);

#endif