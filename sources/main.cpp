#include <iostream>

#include "../headers/vector.hpp"
#include "../headers/plan.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    plan p = plan(vector(1, 0, 0), vector(0, 1, 0)); // pas de profondeur, plan sur x et y;
    p.printPlan();
    cout << p.getU().getNorme() << endl;
    cout << p.getU().getScalaire(p.getV()) << endl;
    return 0;
}
