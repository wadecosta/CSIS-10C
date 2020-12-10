//Game of Life          Steve Ikeoka

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int ROW=23;
const int COL=79;

void pause(int t)
{
    int stop=time(NULL)+t;
    while (time(NULL)<stop);
}

void InitializeChar (char matrix [][COL])
{	int n, m;
	for (n=0; n<ROW; n++)
	{	for (m=0; m<COL; m++)
			matrix [n][m] = ' ';
	}
	for (n=0; n<10; n++)
	{matrix [10][n*6+8] = matrix [10][n*6+9] = matrix [10][n*6+10] = matrix [10][n*6+11] =
		matrix [10][n*6+12] = '*'; }
}


void Output (char matrix [][COL])
{	int n, m;
	for (n=0; n<ROW; n++)
	{	for (m=0; m<COL; m++)
			cout << matrix [n][m];
		cout << endl;
	}
}


int main()
{	char matrix [ROW][COL], nextgen [ROW][COL];
    int generation = 1;
	InitializeChar (matrix);
	do
	{	cout << "Generation " << generation << endl;
		Output (matrix);
        pause(1);
// calculate next generation

		generation++;
	}
	while (0 < 1);
	return 0;
}

