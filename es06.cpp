#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main(){
    int i;
    int rag;
    cout << "Inserire ilraggio: ";
    cin >> rag;
    cout << "\nIl diametro e': " << rag*2;
    cout << "\nLa circonferenza e': " << rag*2*M_PI;
    cout << "\nL'area e': " << pow(rag,2)*M_PI;
    return 0;
}