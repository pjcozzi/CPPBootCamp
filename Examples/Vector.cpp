#include "stdafx.h"

// Notes
// -----

// [ ] encapsulation - public vs. private
// [ ] static
// [ ] naming conventions: pascal case, camel case, ...
// [ ] const correct
// [ ] copy constructor
// [ ] operator=
// [ ] inline
// [ ] namespace
// [ ] pass by value vs. pass by reference
// [ ] headers and cpp files
// [ ] template
// [ ] function overloading
// [ ] global vs. local variables
// [ ] stack vs. heap.  & vs. new
// [ ] 2D arrays
// [ ] enums

// [ ] inheritance
// [ ] virtual function
// [ ] interface vs. abstract classes

class Vector
{
public:
    Vector()
        : x(0.0f),
          y(0.0f),
          z(0.0f)
    {
    }

	Vector(const Vector& v)
        : x(v.x),
          y(v.y),
          z(v.z)
	{
	}

    Vector(float x, float y, float z)
        : x(x),
          y(y),
          z(z)
    {
    }

    ~Vector()
    {
    }

	Vector& operator=(const Vector& other)
	{
		if (this != &other)
		{
			x = other.x;
			y = other.y;
			z = other.z;
		}
		return *this;
	}

    void add(const Vector& other)
    {
        x += other.x;
        y += other.y;
        z += other.z;
    }

	Vector& operator+=(const Vector& other)
	{
		add(other);
		return *this;
	}

    float x;
    float y;
    float z;
};

bool operator==(const Vector& left, const Vector& right)
{
	return (left.x == right.x) && (left.y == right.y) && (left.z == right.z);
}

///////////////////////////////////////////////////////////////////////////////

int _tmain(int argc, _TCHAR* argv[])
{
    Vector v = Vector(1.0f, 2.0f, 3.0f);

    return 0;
}