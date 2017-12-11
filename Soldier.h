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

	void setBoard(string command);//Board* board);
	virtual int move(string mov) = 0;

	char getType();
	int getColor();

protected:
	char _type;
	int _color;

private:
	static Board* _board;

};