#ifndef vector_cpp
#define vector_cpp

class vector {

private:
    int x;
    int y;
    int z;

public:
    vector();
    vector(int _x, int _y, int _z);
    void printVect();
    int getX();
    int getY();
    int getZ();
    float getNorme();
    int getScalaire(vector v);
    vector get_projectionVector(vector v);
};

#endif