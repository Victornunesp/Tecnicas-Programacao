#ifndef BANANA_H
#define BANANA_H
#include "fruta.h"
#include <iostream>

using namespace std;

class Banana : public Fruta{
    
    public:
        
        Banana();
        Banana(string c);
};
#endif