#include<iostream>
using namespace std;

int main(){
    float cel, rea, fah;

    cout << "Masukan suhu dalam celcius: ";
    cin >> cel;
    rea = 0.8 * cel;
    fah = (9/5 * cel) + 32;

    cout << "Suhu anda dalam fahrenheit adalah " << fah <<" F dan suhu anda dalam reamur adalah " << rea <<" R";

    return 0;
}