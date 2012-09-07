#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>

class Vector3
{
public:
	Vector3()
		: _x(0),
		  _y(0),
		  _z(0)
	{
	}

	Vector3(double x, double y, double z)
		: _x(x),
		  _y(y),
		  _z(z)
	{
	}

	double X() const { return _x; }
	double Y() const { return _y; }
	double Z() const { return _z; }

private:
	double _x;
	double _y;
	double _z;

	// Using default copy constructor and operator=.
};

int _tmain(int argc, _TCHAR* argv[])
{
	std::string hello = "Hello";
	std::string stl = "STL";

	std::cout << hello + ' ' + stl << std::endl;

	///////////////////////////////////////////////////////////////////////////

	// TODO 1:  Replace std::vector with std::list.
	std::vector<Vector3> positions;
	positions.push_back(Vector3(0, 1, 2));
	positions.push_back(Vector3(3, 4, 5));
	positions.push_back(Vector3(6, 7, 8));

	std::cout << "Number of positions: " << positions.size() << std::endl;

	// TODO 2:  Replace this with a function call taking pointer to first element and length of array
	std::vector<Vector3>::const_iterator i;
	for (i = positions.begin(); i != positions.end(); ++i)
	{
		std::cout << '[' << i->X() << ", " << i->Y() << ", " << i->Z() << ']' << std::endl;
	}

	///////////////////////////////////////////////////////////////////////////

	std::map<std::string, Vector3> positionsByName;

	positionsByName["top"] = Vector3(0, 0, 10);
	positionsByName["bottom"] = Vector3(0, 0, -10);

	std::map<std::string, Vector3>::iterator j = positionsByName.find("top");
	
	if (j != positionsByName.end())
	{
		const Vector3& vertex = j->second;

		std::cout << "Top = " << '[' << vertex.X() << ", " << vertex.Y() << ", " << vertex.Z() << ']' << std::endl;
	}

	return 0;
}
