//Square.cpp


#include "Square.h"

istream& operator>>(istream& in, Square& sq)
{
    in >> sq.side; // read in an integer for side
    return in;
}

ostream& operator<<(ostream& out, Square s)
{
	out<<s.side;
	return out;
}

Square::Square(int s)
{
	side = s;
}

int Square::area()
{
	return side*side;
}

void Square::setSide(int s)
{
	side = s;
}




