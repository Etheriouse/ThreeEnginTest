#ifndef espace_cpp
#define espace_cpp

#include "vector.hpp"

class espace {

private:
    vector u;
    vector v;
    vector w;

public:
    espace();
    espace(vector _u, vector _v, vector _w);
    void printEspace();
    vector getU();
    vector getV();
    vector getW();
    vector get_projectionEspace(vector vect);
};

#endif