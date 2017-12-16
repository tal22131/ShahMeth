#pragma once

#include <string>
#include "Soldier.h" 


class Board
{
public:
	Board(string board);
	~Board();

	Soldier* _board[8][8];

	Soldier* getLocation(string location);
	Soldier* operator()(int x, int y);


};