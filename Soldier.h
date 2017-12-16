#pragma once

#include <string>
#include "Board.h"

using std::string;

class Board;
class Soldier
{

public:
	Soldier(int color, char type);
	~Soldier() = default;

	virtual int move(string mov) = 0;
	virtual int checkMove(int lineBase, int columnBase, int lineTarget, int columnTarget) = 0;

	char getType();
	int getColor();
	static Board* _board;

protected:
	char _type;
	int _color;	

};