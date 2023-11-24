#include <iostream>
#include "../headers/espace.hpp"
#include "../headers/vector.hpp"
#include "../headers/plan.hpp"

espace::espace()
{
    u = vector();
    v = vector();
    w = vector();
}

espace::espace(vector _u, vector _v, vector _w)
{
    u = _u;
    v = _v;
    w = _w;
}

void espace::printEspace()
{
    printf("u:\n  ");
    u.printVect();
    printf("v:\n  ");
    v.printVect();
    printf("w:\n  ");
    w.printVect();
}

vector espace::getU()
{
    return u;
}

vector espace::getV()
{
    return v;
}

vector espace::getW()
{
    return w;
}


vector espace::get_projectionEspace(vector vect)
{
    vector temp = v.get_projectionVector(vect);
    temp.addVect(u.get_projectionVector(vect));
    temp.addVect(w.get_projectionVector(vect));
    return temp;
}