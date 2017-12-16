#include <string>
#include "Soldier.h"


Soldier::Soldier(int color, char type) : _type(type), _color(color)
{
}

char Soldier::getType()
{
	return _type;
}

int Soldier::getColor()
{
	return _color;
}
