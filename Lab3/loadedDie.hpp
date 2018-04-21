#ifndef LOADEDDIE_HPP
#define LOADEDDIE_HPP
#include <cstdlib>
#include "Die.hpp"

class loadedDie : public Die {

public:
	loadedDie(int sides);
	int roll();
	
};
#endif // !LOADEDDIE_HPP