#include <stdio.h>

int main (){

    int x,i,resto;

    printf("Digite um numero \n");
    scanf("%d", &x);printf("Digite um numero");

    for(i = 0; i <= x; i++){
        resto = i % 3;


        if(resto ==0){
            printf("\n%d",i);
        }
    }

return 0;
}
