#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void barisanArray(int array[], int N){
    for(int i = 0; i < N - 1; i++){
        for(int j = 0; j < N-i- 1; j++){
          if(array[j] > array[j+1]){
              int temp = array[j];
              array [j] = array [j+1];
              array [j+1] = temp;
          }
            
        }
    }
}

void tampilkanArray(int array[], int N){
   for(int i = 0; i < N; i++){
      printf("%d", array[i]);
      printf("\n");
   }
}


int main() {

    
    int N;
    scanf("%d", &N);
    int array[N];
    for(int i = 0; i < N; i++){
    scanf("%d", &array[i]);
    }
    
    
    barisanArray(array, N);
    tampilkanArray(array, N);
    
    
    return 0;
}