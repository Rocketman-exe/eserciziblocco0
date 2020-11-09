#include <iostream>
using namespace std;

int main(){
    int numero1;
    int numero2;

    cout << "Inserire due numeri interi: ";
    cin >> numero1 >> numero2;
    cout << "\nLa somma e': " << numero1+numero2;
    cout << "\nIl prodotto e': " << numero1*numero2;
    cout << "\nLa differenza e': " << numero1-numero2;
    cout << "\nLA divisione e': " << numero1/numero2;
    cout << "\nIl resto e': " << numero1%numero2;
    return 0;
}