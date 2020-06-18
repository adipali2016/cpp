#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

class Point
{
	int x, y;
	// int counter;

public:
	// void Ini(int * &counter)
	// {
	// 	counter = 0;
	// }
	Point(int a, int b)
	{
		x = a;
		y = b;
		// counter++;
	}
	

	void displayPoint(void)
	{
		
		cout << "The point is (" << x << "," << y << ")." << endl;
	}
	friend void DistanceBtwPoints(Point, Point);
};

void DistanceBtwPoints(Point o1, Point o2)
{
	float XCO = ((o1.x - o2.x) * (o1.x - o2.x));
	float YCO = ((o1.y - o2.y) * (o1.y - o2.y));
	cout << "The Distance Between them is " << sqrt(XCO + YCO) << endl;
}

int main()
{
	Point P(1,1);
	P.displayPoint();
	Point Q(1,1);
	Q.displayPoint();
	DistanceBtwPoints(P, Q);
	return 0;
}