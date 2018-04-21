#include "Die.hpp"
#include <cstdlib>

Die::Die() {

	sides = 24;

}

Die::Die(int sides) {

	this->sides = sides;

}


int Die::roll() {

	int result;
	result = (rand() % sides) + 1; //rand() will be seeded in main
	
	return result;
}