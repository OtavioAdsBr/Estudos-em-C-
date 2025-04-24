#include <stdio.h>

int main (){

    int  n = 1, quadrado;


    while (n != 0){

    printf("Digite um valor: (0 para sair) \n");
    scanf("%d", &n);

    quadrado = n * n;
    printf("\nO quadrado do numero e : %d \n", quadrado);
    }

return 0;
}

// Escreva um programa que repete N vezes. A cada interação, o programa deve ler um valor do usuario e mostrar o quadrado desse valor
//O programa deve ter um valor de sentinela para parar a repetição.
