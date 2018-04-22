/*********************************************************************
** Program name: loadedDie.cpp
** Author: Ryan Lew
** Date: 4/20/2018
** Description: Implementation file for the loadedDie subclass. It
**				contains an overridden roll function to provide a higher
**				average roll value.
*********************************************************************/
#include "loadedDie.hpp"
#include <iostream>

loadedDie::loadedDie() {

	sides = 24;

}

loadedDie::loadedDie(int sides) {

	this->sides = sides;

}

/***********************************************************************************
* ** The loaded die's roll gives the player two rolls that add a significant amount
* ** to the rolls value as well as gives that player two rolls and takes the higher
************************************************************************************/
int loadedDie::roll() {
	
	int result1 = 0;
	int result2 = 0;

	//rand() seeded in main.
	//Int division: As the side counts get lower the additions trend towards zero
	result1 = (rand() % sides) + (sides / 4) + (sides / 8); 
	result2 = (rand() % sides) + (sides / 4) + (sides / 8);

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
