#ifndef POINT2D_H
#define POINT2D_H
#include <iostream>

using namespace std;

class Point2d{
    private:
        float m_x;
        float m_y;
    public:
        Point2d();
        Point2d(float x, float y);

        void setX(float x);
        void setY(float y);

        float getX();
        float getY();

        void print();
};
#endif