#pragma once

#include <string>
#include "Soldier.h" 


class Board
{
public:
	Board(string board);
	~Board() = default;

	Soldier* _board[8][8];

	Soldier* getLocation(string location);
	Soldier* operator=(Soldier* other);
	Soldier* operator()(int x, int y);

private:
	void setBoard(string board);

};