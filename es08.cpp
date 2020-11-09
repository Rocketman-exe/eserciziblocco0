#include <iostream>
using namespace std;

int main(){
    int i;
    int numero1;
    int numero2;
    cout << "Inserire due numeri interi: ";
    cin >> numero1 >> numero2;
    if(numero1 % numero2 == 0){
    cout << "il primo numero e' un multiplo del secondo.";
    }
    else
    {
        cout << "il primo numero non e' un multiplo del secondo.";
    }
    return 0;
}