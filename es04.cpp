#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    cin >> num1 >> num2;
    if (num1==num2)
    {
        cout << "These numbers are equal.";
    }
    else if(num1 > num2){
        cout << num1 << "is larger";
    }
    else
    {
        cout << num2 << "is larger";
    }
    return 0;
}

