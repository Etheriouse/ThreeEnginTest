#include <iostream>

#include "../headers/vector.hpp"
#include "../headers/point.hpp"
#include "../headers/object.hpp"
#include "../headers/plan.hpp"
#include <vector>

int main(int argc, char const *argv[])
{

    plan screen = plan(vector(10, 0, 0), vector(0, 10, 0));

    vector v1 = vector(1, 0, 0, point(2, 1, 3));
    vector v2 = vector(0, 0, 1, point(1, 1, 4));
    vector v3 = vector(-1, 0, 0, point(0, 1, 3));
    vector v4 = vector(0, 0, -1, point(1, 1, 2));

    vector v5 = vector(0, 1, 0, point(1, 2, 3));
    vector v6 = vector(0, 1, 0, point(1, 2, 3));
    vector v7 = vector(0, 1, 0, point(1, 2, 3));
    vector v8 = vector(0, 1, 0, point(1, 2, 3));

    vector v9 = vector(1, 0, 0, point(2, 2, 3));
    vector v10 = vector(0, 0, 1, point(1, 2, 4));
    vector v11 = vector(-1, 0, 0, point(0, 2, 3));
    vector v12 = vector(0, 0, -1, point(1, 2, 2));

    std::vector<vector> cube_content = {v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12};

    object cube = object(cube_content);
    std::vector<vector> cubeProj;
    screen.printPlan();
    cube.print();

    for (int i = 0; i < cube_content.size(); i += 1)
    {
        cube_content[i].getMult(10);
        cubeProj.push_back(screen.get_projectionPlan(cube_content[i]));
    }

    for (int i = 0; i < cube_content.size(); i += 1)
    {
        cube_content[i].printVect();
    }

    return 0;
}

// plan sur y et z de u-> pour y et w-> pour z