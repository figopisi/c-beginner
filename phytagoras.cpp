#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a,b,ab,c;

    cout << "Masukan nilai a: ";
    cin >> a;
    cout << "Masukan nilai b: ";
    cin >> b;

    ab = pow(a, 2) + pow(b, 2);
    c = sqrt(ab);

    cout << "Panjang sisi miring adalah " << c;
}