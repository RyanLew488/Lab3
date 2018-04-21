#include "Game.hpp"
#include "helperFunctions.hpp"
#include <iostream>

int main() {

	Game war;

	war.play();
	war.displayResults();

	std::cin.get();
	std::cin.get();
	return 0;
}