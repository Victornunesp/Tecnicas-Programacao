#include "point2d.h"

using namespace std;

Point2d::Point2d(){
    setX(0);
    setY(0);
}

Point2d::Point2d(float x, float y){
    m_x = x;
    m_y = y;
}

void Point2d::setX(float x){
    m_x = x;   
}

void Point2d::setY(float y){
    m_y = y;
}

float Point2d::getX(){
    return m_x;
}

float Point2d::getY(){
    return m_y;
}

void Point2d::print(){
    cout << "\n|Coordenadas|" << endl << endl;
    cout << "Point2d(" << getX() << ";" << getY() << ")" << endl << endl;
}

float Point2d::distancia(Point2d outro){
    float x1 = getX();
    float y1 = getY();

    float x2 = outro.getX();
    float y2 = outro.getY();

    float x = (x1 - x2);
    float y = (y1 - y2);

    float xt = pow(x, 2);
    float yt = pow(y, 2);

    return sqrt(xt + yt);
}