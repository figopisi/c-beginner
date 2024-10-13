#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,i,b; //INTEGER VARIABEL
    b = 0;
    printf("MASUKAN BILANGAN: ");
    scanf("%d", &N); //NILAI N DIATAS MASUK KEDALAM N DISINI SEBAGAI NILAI INT
    
    for(i = 2; i <= N; i++){
                                 //PROGRAM DISAMPING ITU PENERAPAN LANJUTAN BISA PADA PENCARIAN FPB DARI SUATU BILANGAN
        if(N % i == 0){          //BAGIAN INI AKAN MENCARI TERUS MENCARI FPB DARI N         
            b++;  
            printf("%d\n", i);               //PADA BAGIAN INI ADALAH OPERASI LOGIKA, DIMANA BILA N HABIS PADA SATU BILANGAN != N.
            }
        }
    
    if (b == 0){
        printf("\nPRIMA");
    }
    
    else{
        printf("\nBUKAN");
    }

    
    return 0;
}