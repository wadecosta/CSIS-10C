// Rectangle.h

#include <iostream>
using namespace std;

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
	public:
		Rectangle(int len=0, int wid=0);
		int getLength();
		int getWidth();
		int area();
		void setLength(int len);
		void setWidth(int wid);
		
		friend ostream& operator<<(ostream& out, Rectangle r);
		
	private:
	    int length;
	    int width;
};

#endif  // RECTANGLE_H
