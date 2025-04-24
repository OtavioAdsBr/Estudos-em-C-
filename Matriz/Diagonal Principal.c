#include <stdio.h>
#define LIN 5
#define COL 5

int main(){

    int m[LIN][COL];
    int i,j;

    for (i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            m[i][j];
            if (i==j){
                m[i][j] = 1;
            }else{
                m[i][j] = 0;
            }
        }

    }

    for (i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
                printf("%d ", m[i][j]);
        }
    printf("\n");

    }

return 0;
}

