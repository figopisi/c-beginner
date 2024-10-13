#include<iostream>
using namespace std;

int main(){
    double x1,x,n,y,s;
    cout << "Masukan nilai bilangan: ";
    cin >> s;
    cout << "Masukan bilangan akar terdekat\n(Misal bila bilangan 17 masukan 4";
    cout << "\nyang merupakan akar 16 sebagai bilangan terdekat)\nMasukan bilangan: ";
    cin >> x;
    y = 5;

    for (int i = 1; i < y; i++)
    {
       n = 0.5 * (x + s/x);
       if (x - n == 0)
       {
        break;
       }
       cout << "iterasi ke-" << i << " adalah " << x <<'\n';
       x = n;  
    }    
    
    return 0;
}