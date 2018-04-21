#ifndef DIE_HPP
#define DIE_HPP

class Die {

protected:
	int sides;
	int rollResult;

public:
	Die();
	Die(int sides);
	int roll(int numSides);

};

#endif // !DIE_HPP
