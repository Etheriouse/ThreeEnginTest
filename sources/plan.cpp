#include <iostream>
#include "../headers/plan.hpp"
#include "../headers/vector.hpp"

plan::plan()
{
    u = vector();
    v = vector();
}

plan::plan(vector _u, vector _v)
{
    u = _u;
    v = _v;
}

void plan::printPlan()
{
    printf("u:\n  ");
    u.printVect();
    printf("v:\n  ");
    v.printVect();
    //printf("u:\n x: %d y: %d z: %d\n", u.getX(), u.getY(), u.getZ());
    //printf("v:\n x: %d y: %d z: %d\n", v.getX(), v.getY(), v.getZ());
}

vector plan::getU()
{
    return u;
}

vector plan::getV()
{
    return v;
}

vector plan::get_projectionPlan(vector vect)
{
    vector temp = getV().get_projectionVector(vect);
    temp.addVect(getU().get_projectionVector(vect));
    return temp;
}