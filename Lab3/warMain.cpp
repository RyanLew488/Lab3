#include "Game.hpp"
#include "helperFunctions.hpp"
#include <iostream>
#include <time.h>

int main() {

	srand(time(0));
	Game war;

	war.play();
	
	std::cin.get();
	std::cin.get();
	return 0;
}