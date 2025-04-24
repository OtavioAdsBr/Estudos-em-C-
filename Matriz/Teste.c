#include <stdio.h>
#define LIN 3
#define COL 2

int main(){

    int m[LIN][COL]; //Definindo uma matriz 3x2
    int i,j;

    for (i = 0; i<LIN; i++){
        for(j = 0; j<COL; j++){
            printf("%d ", m[i][j]);


        }
        printf("\n");
    }






return 0;
}
