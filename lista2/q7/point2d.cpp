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
