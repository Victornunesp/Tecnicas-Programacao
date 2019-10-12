#ifndef MACA_VERDE_H
#define MACA_VERDE_H
#include "fruta.h"
#include "maca.h"
#include <iostream>

using namespace std;

class MacaVerde : public Maca{
    
    public:
        MacaVerde();
        MacaVerde(string c);
};
#endif