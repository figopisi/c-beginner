#include <stdio.h>
#include <math.h>

const double phi = 3.14;
// Prototype fungsi
void menu();
void vTabung();
void lpTabung() ;
void vBola();
void lpBola();
void vLSegiempat();
void lpLSegiempat();
void vPSegitiga();
void lpPSegitiga();
void vKerucut(); 
void lpKerucut();

int main() {
    printf("=====================================\n");
    printf("       KALKULATOR BANGUN RUANG       \n");
    printf("=====================================\n");
    menu();
    
    return 0;
}

void menu(){
    int i;

    printf("Masukan bangun ruang yang harus dikerjakan \n1.Tabung\n2.Bola\n3.Limas Segiempat\n4.Prisma Segitiga\n5.Kerucut\nKetik nomor bangun ruang: ");
    scanf("%d", &i);
    printf("=====================================\n");

    char j;
    switch (i) {
        case 1:
            printf("Masukan permasalahan \na.Volume\nb.Luas permukaan\nMasalah: ");
            scanf(" %c", &j);
            if (j == 'a') {
                vTabung();
            } else {
                lpTabung();
            }
            break;
        case 2:
            printf("Masukan permasalahan \na.Volume\nb.Luas permukaan\nMasalah: ");
            scanf(" %c", &j);
            if (j == 'a') {
                vBola();
            } else {
                lpBola();
            }
            break;
        case 3:
            printf("Masukan permasalahan \na.Volume\nb.Luas permukaan\nMasalah: ");
            scanf(" %c", &j);
            if (j == 'a') {
                vLSegiempat();
            } else {
                lpLSegiempat();
            }
            break;
        case 4:
            printf("Masukan permasalahan \na.Volume\nb.Luas permukaan\nMasalah: ");
            scanf(" %c", &j);
            if (j == 'a') {
                vPSegitiga();
            } else {
                lpPSegitiga();
            }
            break;
        case 5:
            printf("Masukan permasalahan \na.Volume\nb.Luas permukaan\nMasalah: ");
            scanf(" %c", &j);
            if (j == 'a') {
                vKerucut();
            } else {
                lpKerucut();
            }
            break;
        default:
            printf("Pilihan tidak valid!\n");
            break;
    }
}

void vTabung() {
    double r, t, v;

    printf("Masukan nilai jari-jari: ");
    scanf("%lf", &r);
    printf("Masukan nilai tinggi: ");
    scanf("%lf", &t);
    v = phi * pow(r, 2) * t;
    printf("Volumenya adalah: %.2lf\n", v);
}


void lpTabung() {
    double r, t, lp;

    printf("Masukan nilai jari-jari: ");
    scanf("%lf", &r);
    printf("Masukan nilai tinggi: ");
    scanf("%lf", &t);
    lp = 2 * phi * r * (r + t);
    printf("Luas permukannya adalah: %.2lf\n", lp);
}


void vBola() {
    double r, v;

    printf("Masukan nilai jari-jari: ");
    scanf("%lf", &r);
    v = (4.0 / 3.0) * phi * pow(r, 3);
    printf("Volumenya adalah: %.2lf\n", v);
}


void lpBola() {
    double r, lp;

    printf("Masukan nilai jari-jari: ");
    scanf("%lf", &r);
    lp = 4 * phi * pow(r, 2);
    printf("Luas permukannya adalah: %.2lf\n", lp);
}


void vLSegiempat() {
    double s, t, v;

    printf("Masukan nilai sisi: ");
    scanf("%lf", &s);
    printf("Masukan nilai tinggi: ");
    scanf("%lf", &t);
    v = (1.0 / 3.0) * pow(s, 2) * t;
    printf("Volumenya adalah: %.2lf\n", v);
}


void lpLSegiempat() {
    double s, t, lp, p;

    printf("Masukan nilai sisi: ");
    scanf("%lf", &s);
    printf("Masukan nilai tinggi: ");
    scanf("%lf", &t);
    p = 4 * sqrt(pow(s / 2, 2) + pow(t, 2)); 
    lp = pow(s, 2) + (2 * s * sqrt(pow(s / 2, 2) + pow(t, 2)));
    printf("Luas permukannya adalah: %.2lf\n", lp);
}


void vPSegitiga() {
    double a, t, ti, v;

    printf("Masukan nilai alas: ");
    scanf("%lf", &a);
    printf("Masukan nilai tinggi: ");
    scanf("%lf", &t);
    printf("Masukan nilai tinggi prisma(jarak kedua segitiga): ");
    scanf("%lf", &ti);
    double l = (a * t) / 2; 
    v = l * ti; 
    printf("Volumenya adalah: %.2lf\n", v);
}

void lpPSegitiga() {
    double a, t, ti, lp;

    printf("Masukan nilai alas: ");
    scanf("%lf", &a);
    printf("Masukan nilai tinggi: ");
    scanf("%lf", &t);
    printf("Masukan nilai tinggi prisma(jarak kedua segitiga): ");
    scanf("%lf", &ti);
    double l = (a * t) / 2; 
    double p = 3.0 * a; 
    lp = 2 * l + (p * ti); 
    printf("Luas permukannya adalah: %.2lf\n", lp);
}


void vKerucut() {
    double r, t, v;

    printf("Masukan nilai jari-jari: ");
    scanf("%lf", &r);
    printf("Masukan nilai tinggi: ");
    scanf("%lf", &t);
    v = (1.0 / 3.0) * phi * pow(r, 2) * t;
    printf("Volumenya adalah: %.2lf\n", v);
}


void lpKerucut() {
    double r, t, lp;

    printf("Masukan nilai jari-jari: ");
    scanf("%lf", &r);
    printf("Masukan nilai tinggi: ");
    scanf("%lf", &t);
    double s = sqrt(pow(r, 2) + pow(t, 2)); 
    lp = phi * r * (r + s);
    printf("Luas permukannya adalah: %.2lf\n", lp);
}