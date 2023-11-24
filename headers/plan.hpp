#ifndef plan_cpp
#define plan_cpp

#include "vector.hpp"

class plan {

private:
    vector u;
    vector v;

public:
    plan();
    plan(vector _u, vector _v);
    void printPlan();
    vector getU();
    vector getV();
    vector get_projectionPlan(vector v);
};

#endif