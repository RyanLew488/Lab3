#include "Die.hpp"
#include <cstdlib>

Die::Die() {

	sides = 24;

}

Die::Die(int sides) {

	this->sides = sides;

}


int Die::roll(int numSides) {

	int result;
	result = (rand() % numSides) + 1; //rand() will be seeded in main
	
	return result;
}