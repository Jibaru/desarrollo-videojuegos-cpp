#include "Figura.h"

Figura::Figura(double i, double j)
{
	_x = i;
	_y = j;
}

Figura::~Figura()
{
}

void
Figura::setDim(double i, double j)
{
	_x = i;
	_y = j;
}

double
Figura::getX() const
{
	return _x;
}

double
Figura::getY() const
{
	return _y;
}