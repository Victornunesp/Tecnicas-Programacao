#include "fruta.h"

using namespace std;

Fruta::Fruta(){
    setNome("-");
    setCor("-");
}

Fruta::Fruta(string n, string c){
    setNome(n);
    setCor(c);
}

void Fruta::setNome(string n){
    nome = n;
}

void Fruta::setCor(string c){
    cor = c;
}

string Fruta::getNome(){
    return nome;
}

string Fruta::getCor(){
    return cor;
}