#include <iostream>
using namespace std;


int main(){
	int n;
    int i;
    cout << 1 << " " << 2 << " " << 3 << " " << 4 << endl;
    cout << "1 "
         << "2 "
         << "3 "
         << "4 " << endl;
    cout << 1;
    cout << 2;
    cout << 3;
    cout << 4 << endl;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cout << i+1 << " ";
    }
    
    return 0;
}