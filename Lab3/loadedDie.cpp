#include "loadedDie.hpp"

loadedDie::loadedDie() {

	sides = 24;

}

loadedDie::loadedDie(int sides) {

	this->sides = sides;

}

int loadedDie::roll() {
	
	int result1 = 0;
	int result2 = 0;

	result1 = (rand() % sides) + static_cast<int>(sides / 2);
	result2 = (rand() % sides) + static_cast<int>(sides / 2);

	if (result1 > result2) {
		
		if (result1 > sides) {
			result1 = sides;
		}
		return result1;
	}

	else {

		if (result2 > sides) {
			result2 = sides;
		}

		return result2;
	}
}