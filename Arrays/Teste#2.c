#include <stdio.h>
#define TAMANHO 10
// Crie um programa que armazene 10 valores do tipo inteiro preenchidos pelo ususario
// Imprima esse vetor. Depois verifique quais valores desse vetor são multiplos por 3 e imprima os indices e os valores, um em cada linha.

int main (){

    int valores[TAMANHO];
    int i;

     for(i = 0; i < TAMANHO; i++){
        printf("Digite um valor %d:\n", i);
        scanf("%d", &valores[i]);
    }

    printf("\n");
    for(i = 0; i < TAMANHO; i++){
        printf("%d\n", valores[i]);
    }

    printf("\nMultiplos de 3:");

    for(i = 0; i < TAMANHO; i++){
        if(valores[i] %  3 == 0){
            printf("\n%d", valores[i]);
        }
    }




return 0;
}
