#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include "sensor.h"

using namespace std;

void criarArquivo();

void setVetor(vector<int> &v);

void mostrarVetor(vector<int> &v);

bool repetido(int encontrar, int posicao, vector<int> v);

void vetorDados(vector<int> v, vector<DadosSensor> &vSensor);

void show(vector<DadosSensor> &vSensor);
