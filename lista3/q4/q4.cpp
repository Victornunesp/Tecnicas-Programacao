#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#define QNT_GERADA 500
#define INTERVALO 1000

using namespace std;

int main(){
    int valor;
    int random;
    int cont = 0;
    vector <int> intvet;
    
    ofstream randomfile;
    
    srand(time(NULL));
    
    randomfile.open("random.txt");

    for(int i = 0; i<QNT_GERADA; i++){
        random = rand()%INTERVALO;
        randomfile << random << endl;
        intvet.push_back(random);
    }
    
    randomfile.close();
    
    sort(intvet.begin(),intvet.end());

    for(auto i : intvet){
        cout << i << "     [" << cont+1 << "]" << endl;
        cont ++;
    }
    
    return 0;
}