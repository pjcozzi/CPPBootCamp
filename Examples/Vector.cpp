#include "stdafx.h"

// encapsulation - public vs. private
// static
// naming conventions
// const correct
// operator=
// inline
// namespace
// function by value
// header
// template

// inheritance
// virtual function
// abstract classes

class Vector
{
public:
    Vector()
        : x(0.0f),
          y(0.0f),
          z(0.0f)
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

    void add(const Vector& other)
    {
        x += other.x;
        y += other.y;
        z += other.z;
    }

    float x;
    float y;
    float z;
};

int _tmain(int argc, _TCHAR* argv[])
{
    Vector v = Vector(1.0f, 2.0f, 3.0f);
    v.add(v);

    return 0;
}