/*********************************************************************
** Program name: loadedDie.hpp
** Author: Ryan Lew
** Date: 4/20/2018
** Description: Header file for the loadedDie sub class.
*********************************************************************/

#ifndef LOADEDDIE_HPP
#define LOADEDDIE_HPP
#include <cstdlib>
#include "Die.hpp"

class loadedDie : public Die {

public:
	loadedDie();
	loadedDie(int sides);
	int roll();
	
};
#endif // !LOADEDDIE_HPP