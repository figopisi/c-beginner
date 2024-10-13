#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

       char A[100],B[100];
       int i;
       scanf("%s", A);
       scanf("%s", B);
    
        if (strlen(A) == strlen(B)){
            for(i = 0; i <= strlen(A); i++){
                // if (A[i] == B[i]){
                //     b++;
                // }
                // else {
                //     b--;
                // }
            }
              if (A[0] == B[0]){
                    printf("IDENTIK");
                }
              else {
                 printf("MIRIP");
                }
        }
    
        else {
            printf("BERBEDA");
        }
       
      
    return 0;
}
