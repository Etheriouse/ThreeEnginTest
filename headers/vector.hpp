#ifndef vector_cpp
#define vector_cpp

#include "point.hpp"

class vector {

private:
    float x;
    float y;
    float z;

    point start;

public:
    vector();
    vector(float _x, float _y, float _z);
    vector(float _x, float _y, float _z, point _start);
    void printVect();
    void setVect(vector v);
    float getX();
    float getY();
    float getZ();
    point getStart();
    float getNorme();
    float getScalaire(vector v);
    void getMult(float f);
    void addVect(vector v);
    vector get_projectionVector(vector v);
};

#endif