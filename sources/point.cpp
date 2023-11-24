#include <iostream>
#include "../headers/point.hpp"

point::point()
{
    x = 0;
    y = 0;
    z = 0;
}

point::point(float _x, float _y, float _z)
{
    x = _x;
    y = _y;
    z = _z;
}

float point::getCoordinateX()
{
    return x;
}

float point::getCoordinateY()
{
    return y;
}

float point::getCoordinateZ()
{
    return z;
}

void point::setCoordinate(float _x, float _y, float _z)
{
    x = _x;
    y = _y;
    z = _z;
}