#ifndef point_hpp
#define point_hpp

class point
{

private:
    float x;
    float y;
    float z;

public:
    point();
    point(float _x, float _y, float _z);
    float getCoordinateX();
    float getCoordinateY();
    float getCoordinateZ();
    void setCoordinate(float _x, float _y, float _z);
};

#endif