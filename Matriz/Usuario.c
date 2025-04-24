#include <stdio.h>
#define LIN 3
#define COL 3

int main(){

    int m[LIN][COL];
    int i,j;
    int maior;

    for (i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
        printf("Digite um numero: \n");
        scanf("%d", &m[i][j]);
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
