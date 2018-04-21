#include "Game.hpp"
#include "helperFunctions.hpp"
#include <iostream>


Game::Game() {

	p1Score = 0;
	p2Score = 0;
	p1Sides = 0;
	p2Sides = 0;
	numRounds = 0;
	p1DieType = 0;
	p2DieType = 0;

}

void Game::play() {

	p1Score = 0;
	p2Score = 0;

	while (yesNoValidation() == true) {

		menu(p1Sides, p2Sides, numRounds, p1DieType, p2DieType);

		if (p1DieType == 1) {

			p1 = new loadedDie(p1Sides);

		}
		
		else {

			p1 = new Die(p1Sides);

		}

		if (p2DieType == 1) {

			p2 = new loadedDie(p2Sides);

		}

		else {

			p2 = new Die(p2Sides);

		}
	}
}

void Game::checkWinner() {

	for (int i = 0; i < numRounds; i++) {
		int p1Roll = 0;
		int p2Roll = 0;
		p1Roll = p1->roll();
		p2Roll = p2->roll();
		
		std::cout << "Player 1 rolled a: " << p1Roll << std::endl;
		std::cout << "Player 2 rolled a: " << p2Roll << std::endl;

		if (p1Roll > p2Roll) {

			std::cout << "Player 1 wins the round" << std::endl;
			p1Score++;

		}
		
		else if (p2Roll < p1Roll) {

			std::cout << "Player 2 wins the round" << std::endl;
			p2Score++;

		}
		else {

			std::cout << "Round is a draw" << std::endl;

		}

	}

}
void Game::displayResults() {
	
	std::cout << "displayResults() function running." << std::endl;
}

Game::~Game() {

	delete p1;
	delete p2;

}