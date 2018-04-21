#include "loadedDie.hpp"

int loadedDie::roll() {
	
	int result1 = 0;
	int result2 = 0;

	result1 = (rand() % sides) + 2;
	result2 = (rand() % sides) + 2;

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