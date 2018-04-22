/*********************************************************************
** Program name: Game.cpp
** Author: Ryan Lew
** Date: 4/20/2018
** Description: Implementation file for the Game class. Has functions to
**				play the game and display the game. Uses dynamic memory
**				to allow the user to select what type of Die each player uses
*********************************************************************/

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
	
	while (yesNoValidation() == true) { //Loops until the user inputs n

		p1Score = 0;
		p2Score = 0;

		menu(p1Sides, p2Sides, numRounds, p1DieType, p2DieType);

/***************************************************************
* ** This section allows the user to select each players ie type
****************************************************************/
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

		for (int i = 0; i < numRounds; i++) { //individual game loop

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

			else if (p2Roll > p1Roll) {

				std::cout << "Player 2 wins the round" << std::endl;
				p2Score++;

			}
			else {

				std::cout << "Round is a draw" << std::endl;

			}	
		}
		displayResults();
	}
}

void Game::displayResults() {
	
	std::cout << "Player 1's final score: "<< p1Score << std::endl;
	std::cout << "Player 1's die type: ";

	if (p1DieType == 1) {
		std::cout << "Loaded" << std::endl;
	}
	else {
		std::cout << "Normal" << std::endl;
	}

	std::cout << "Player 2's final score: " << p2Score << std::endl;
	std::cout << "Player 2's die type: ";

	if (p2DieType == 1) {

		std::cout << "Loaded" << std::endl;

	}

	else {

		std::cout << "Normal" << std::endl;

	}
}

Game::~Game() {

	delete p1;
	delete p2;

}