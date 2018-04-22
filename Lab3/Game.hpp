/*********************************************************************
** Program name: Game.hpp
** Author: Ryan Lew
** Date: 4/20/2018
** Description: Header file for the Game class.
*********************************************************************/

#ifndef GAME_HPP
#define GAME_HPP
#include "loadedDie.hpp"


class Game {

private:
	int p1Score;
	int p2Score;
	int p1Sides;
	int p2Sides;
	int numRounds;
	int p1DieType;
	int p2DieType;

	Die* p1;
	Die* p2;

public:
	Game();
	void play();
	void displayResults();
	~Game();

};

#endif // !GAME_HPP
