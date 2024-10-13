#include<stdio.h>
double vol_balok(double p, double l, double t){
    double temp = p * l * t;

    return temp;
}

int main(){
    double p,l,t,v;
    printf("Masukan nilai panjang: ");
    scanf("%lf", &p);
    printf("Masukan nilai lebar: ");
    scanf("%lf", &l);
    printf("Masukan nilai tinggi: ");
    scanf("%lf", &t);

    v = vol_balok( p,  l,  t);
    printf("Nilai volume yang didapat adalah %lf", v);
}
