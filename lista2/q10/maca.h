#ifndef MACA_H
#define MACA_H
#include "fruta.h"
#include <iostream>

using namespace std;

class Maca : public Fruta{
    
    public:
        Maca();
        Maca(string c);
};
#endif