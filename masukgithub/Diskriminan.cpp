#include<iostream>
#include<cmath>
using namespace std;


int main(){
    string nil;
    char p,q,r;
    int a,b,c,d;
    double x1,x2;
    cout << "Masukan nilai persamaan kuadrat: ";
    getline(cin, nil);
    
    p = nil.at(0);
    q = nil.at(3);
    r = nil.at(6);

    a = p -'0';
    b = q -'0';
    c = r -'0';

    d = pow(b, 2) - 4*a*c;
    cout << d;

    if (d > 0)
    {
        x1 = (1/2*a) * -b + sqrt(d);
        x2 = (1/2*a) * -b - sqrt(d);

        cout << "akar-akar persamaan kuadratnya adalah " << x1 << " dan " << x2;
    }

    else if (d == 0)
    {
        x1 = (1/2*a) * -b;
        cout << "akar persamaan kuadratnya adalah " << x1;
    }

    else if ( d < 0)
    {
        cout << "akar persamaan kuadratnya bersifat imajiner";
    }

    return 0;
}