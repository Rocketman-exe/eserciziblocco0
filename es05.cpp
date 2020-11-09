#include <iostream>
using namespace std;

int main(){
    int numero1;
    int numero2;
    int numero3;
    cout << "Inserire tre numeri interi: ";
    cin >> numero1 >> numero2 >> numero3;
    cout << "\nLa somma e': " << numero1+numero2+numero3;
    cout << "\nLa media e': " << (numero1+numero2+numero3)/3;
    cout << "\nIl prodotto e': " << numero1*numero2*numero3 << endl;
    if((numero1 >= numero2) && (numero1 >= numero3))
        cout << "Il numero piu' grande e': " << numero1 << endl;
    else if ((numero2 >= numero1) && (numero2 >= numero3))
        cout << "Il numero piu' grande e': " << numero2 << endl;
    else
        cout << "Il numero piu' grande e': " << numero3 << endl;
    if((numero1 <= numero2) && (numero1 <= numero3))
        cout << "Il numero piu' piccolo e': " << numero1 << endl;
    else if ((numero2 <= numero1) && (numero2 <= numero3))
        cout << "Il numero piu' piccolo e': " << numero2 << endl;
    else
        cout << "Il numero piu' piccolo e': " << numero3 << endl;
    return 0;
}