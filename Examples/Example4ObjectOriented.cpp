#include "stdafx.h"
#include <iostream>

class Shape
{
public:
	virtual void Render() = 0;

	// TODO 3a: Add virtual Area method here and to each derived class.
};

class Circle : public Shape
{
public:
	// TODO 3b:  Add constructor taking radius.  Use this to implement Area().

	virtual void Render()
	{
		std::cout << "Circle" << std::endl;
	}
};

class Square : public Shape
{
public:
	// TODO 3c:  Add constructor taking length.  Use this to implement Area().

	virtual void Render()
	{
		std::cout << "Square" << std::endl;
	}
};

// TODO 1:  Add rectangle class.  Then add a rectangle variable to _tmain() similar to the others.

int _tmain(int argc, _TCHAR* argv[])
{
	// TODO 2a:  Replace individual variables with an array of Shape pointers.
	Shape *circle = new Circle();
	Shape *square = new Square();

	// TODO 2b:  Use a for loop to call Render on each shape in the array.
	circle->Render();
	square->Render();

	// TODO 4:  Output area of each shape in the array.

	delete circle;
	delete square;

	return 0;
}
