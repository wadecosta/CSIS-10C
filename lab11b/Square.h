// Square.h

#include <iostream>
using namespace std;

#ifndef SQUARE_H
#define SQUARE_H

class Square
{
	public:
		Square(int s=0);
		int getSide();
		int area();
		void setSide(int s);

		friend ostream& operator<<(ostream& out, Square sq);
		friend istream& operator>>(istream& in, Square& sq);

	private:
	    int side;
};

#endif   // SQUARE_H
