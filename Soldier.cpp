#include <string>
#include "Soldier.h"


Soldier::Soldier(int color, char type) : _type(type), _color(color)
{

}

void Soldier::setBoard(string command)//Board * board)
{

	int i = 0, j = 0, counter = 0;
	



	for (i = 0; i < 8 ; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (command[counter] != '#')
			{
				if (command[counter] >= 'a' && command[counter] <= 'z')
				{
					board[i][j] = ;
				}
				else
				{

				}
				
			}
			counter++;
			
		}
	}
}

char Soldier::getType()
{
	return _type;
}

int Soldier::getColor()
{
	return _color;
}
