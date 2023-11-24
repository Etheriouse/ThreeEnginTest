#include <iostream>
#include "../headers/vector.hpp"
#include <cmath>

vector::vector()
{
    x = 0;
    y = 0;
    z = 0;
}

vector::vector(int _x, int _y, int _z)
{
    x = _x;
    y = _y;
    z = _z;
}

void vector::printVect()
{
    printf("x: %d y: %d z: %d\n", x, y, z);
}

int vector::getX()
{
    return x;
}

int vector::getY()
{
    return y;
}

int vector::getZ()
{
    return z;
}

float vector::getNorme()
{
    return (float) sqrt((x*x)+(y*y)+(z*z));
}

int vector::getScalaire(vector v)
{
    return x*v.getX()-y*v.getY()-z*v.getZ();
}

vector vector::get_projectionVector(vector v)
{
    return vector();
}
