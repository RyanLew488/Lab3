/*********************************************************************
** Program name: Die.hpp
** Author: Ryan Lew
** Date: 4/20/2018
** Description: Header file for the Die class.
*********************************************************************/

#ifndef DIE_HPP
#define DIE_HPP

class Die {

protected:
	int sides;
	int rollResult;

public:
	Die();
	Die(int sides);
	virtual int roll();

};

#endif // !DIE_HPP
