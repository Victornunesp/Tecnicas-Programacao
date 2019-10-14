#include <iostream>
#include <fstream>
#define QNT_GERADA 500
#define INTERVALO 1000

using namespace std;

int main(){
    ofstream randomfile;    
    int random;

    randomfile.open("random.txt",ios::app);
    
    srand(time(NULL));
    
    for(int i = 0; i<QNT_GERADA; i++){
        random = rand()%INTERVALO;
        randomfile << random << endl;
    }

    randomfile.close();
    
    return 0;
}