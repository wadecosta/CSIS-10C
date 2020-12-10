// Rectangle.cpp

#include "Rectangle.h"

ostream& operator<<(ostream& out, Rectangle r)
{
	out<<"["<<r.length<<","<<r.width<<"]";
	return out;
}

Rectangle::Rectangle(int len, int wid)
{
	length = len;
	width = wid;
}

int Rectangle::getLength()
{
	return length;
}

int Rectangle::getWidth()
{
	return width;
}

int Rectangle::area()
{
	return length*width;
}

void Rectangle::setLength(int len)
{
	length = len;
}

void Rectangle::setWidth(int wid)
{
	width = wid;
}
		


