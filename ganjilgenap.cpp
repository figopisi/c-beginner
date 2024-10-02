#include<iostream>
using namespace std;

int main(){
    int bilangan;

    cout << "Masukan nilai bilangan anda: ";
    cin >> bilangan;

    if (bilangan % 2 == 1)
    {
        cout << "bilngan anda adalah bilangan ganjil";
    }

    else if (bilangan == 0)
    {
        cout << "bilangan anda adalah adalah 0";
    }

    else {
        cout << "bilangan anda adalah bilangan genap";
    }
    
    return 0;

}