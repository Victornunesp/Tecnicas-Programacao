#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <math.h>

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
        float distancia(Point2d outro);
};

#endif