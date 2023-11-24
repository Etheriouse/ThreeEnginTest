#include <iostream>
#include "../headers/vector.hpp"
#include "../headers/point.hpp"
#include <cmath>

using namespace std;

vector::vector()
{
    x = 0;
    y = 0;
    z = 0;

    start = point();
}

vector::vector(float _x, float _y, float _z)
{
    x = _x;
    y = _y;
    z = _z;
    start = point();
}

vector::vector(float _x, float _y, float _z, point _start)
{
    x = _x;
    y = _y;
    z = _z;
    start = _start;
}

void vector::printVect()
{
    printf("x: %f y: %f z: %f\n", x, y, z);
}

void vector::setVect(vector v)
{
    x = v.getX();
    y = v.getY();
    z = v.getZ();
    start = v.getStart();
}

float vector::getX()
{
    return x;
}

float vector::getY()
{
    return y;
}

float vector::getZ()
{
    return z;
}

point vector::getStart() {
    return start;
}

float vector::getNorme()
{
    return (float)sqrt((x * x) + (y * y) + (z * z));
}

float vector::getScalaire(vector v)
{
    return x * v.getX() + y * v.getY() + z * v.getZ();
}

void vector::getMult(float f)
{
    x = x*f;
    y = y*f;
    z = z*f;
}

void vector::addVect(vector v) {
    x+=v.getX();
    y+=v.getY();
    z+=v.getZ();
}

/**
 * Projection orthogonal de V sur le vecteur de la class
 * @param v le vecteur projeté
 * @return le vecteur v projeté sur this
 */
vector vector::get_projectionVector(vector v)
{
    vector temp = vector(x, y, z);
    temp.getMult(getScalaire(v)/(getNorme()*getNorme()));
    return temp;
}
