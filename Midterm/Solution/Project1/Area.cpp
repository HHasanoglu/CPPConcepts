#include<iostream>
using namespace std;
class Circle
{
public:
	int radius{};

	Circle(int r)
	{
		radius = r;
	}
};

class Square
{
public:
	int side{};

	Square(int s)
	{
		side = s;
	}
};

void calculateArea(Square square, Circle circle)
{
	float circle_area, square_area;
	circle_area = 3.14 * (circle.radius * circle.radius);
	cout << "Area of Circle : " << circle_area << endl;
	square_area = square.side * square.side;
	cout << "Area of Square : " << square_area << endl;
}

int main()
{
	Circle circle = Circle(4);
	Square square = Square(5);
	calculateArea(square, circle);
	return 0;
}