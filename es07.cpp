#include <iostream>
using namespace std;

int main(){
    int i;
    int numero1;
    cout << "Inserire un numero intero: ";
    cin >> numero1;
    if ( numero1 % 2 == 0)
        cout << "il numero " << numero1 << " e' pari.";
    else
        cout << "il numero " << numero1 << " e' dispari.";
    return 0;
}