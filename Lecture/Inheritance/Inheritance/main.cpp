#include<iostream>

using namespace std;

class Shape
{
private:
	string name;

public:
	Shape(string name)//Constructor
	{
		this->name = name;
	};

	//Setter
	void SetName(string newName) {
		this->name = newName;
	}

	//Getter
	string GetName()const {
		return this->name;
	}

	virtual double GetArea()const = 0; //Pure Virtual Method
	virtual double GetPrimeter()const = 0; //Pure Virtual Method
};


class Circle:public Shape
{
private:
	double radius;

public:
	Circle(string name, double radius) :Shape(name)
	{
		this->radius = radius;
	};

	void setRadius(double radius) {
		this->radius = radius;
	}

	double GetRadius()const
	{
		return this->radius;
	}

	virtual double GetArea()const {
		return 3.14 * radius * radius;
	}

	double GetPrimeter()const {
		return 2*3.14 * radius;
	}
};

class Rectangle:public Shape
{
protected:
	double width;
	double height;
public:
	Rectangle(string name, double width, double height) :Shape(name)
	{
		this->width = width;
		this->height = height;
	};

	void SetWidth(double width) {
		this->width = width;
	}

	void SetHeight(double height) {
		this->height = height;
	}

	double GetWidth()const
	{
		return this->width;
	}

	double GetHeight()const
	{
		return this->height;
	}

    double GetArea()const {
		return width * height;
	}

	double GetPrimeter()const {
		return 2 * (width+height);
	}
};

class Cube:public Rectangle
{
private:
	double depth;

public:
	Cube(string name, double width, double height, double depth) :Rectangle(name,width,height)
	{
		this->depth = depth;
	};

	void SetDepth(double depth) {
		this->depth = depth;
	}

	double GetDepth()const
	{
		return this->depth;
	}

	virtual double GetArea()const {
		return width*height*depth;
	}

	double GetPrimeter()const {
		return 4*(GetWidth()+ height)+4*(width+depth)+4*(height+depth);
	}

};


int main() {

	//Shape s("geometric Shape");

	Shape* shapes[3] = { new Circle("Daire",5),new Rectangle("DikDortgen",5,2),new Cube("Kup",5,2,3) };

	for (int i = 0; i < 3; i++)
	{
		cout <<shapes[i]->GetName() << endl;
		cout <<shapes[i]->GetArea() << endl;
	}



	//cout << circle.GetName()<<endl;
	//cout << circle.GetArea()<<endl;

	//cout << rectangle.GetName()<<endl;
	//cout << rectangle.GetArea()<<endl;

	//cout << cube.GetName()<<endl;
	//cout << cube.GetArea()<<endl;

	//cout << s.GetName()<<endl;

	//cout << circle.GetRadius()<<endl;
	//cout << circle.GetPrimeter()<<endl;

	//cout << rectangle.GetWidth()<<endl;
	//cout << rectangle.GetHeight()<<endl;
	//cout << rectangle.GetPrimeter()<<endl;

	//cout << cube.GetWidth()<<endl;
	//cout << cube.GetHeight()<<endl;
	//cout << cube.GetDepth()<<endl;
	//cout << cube.GetPrimeter()<<endl;


	return 0;
}