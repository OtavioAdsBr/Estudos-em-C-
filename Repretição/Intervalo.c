#include <stdio.h>

int main (){

    int soma = 0;
    int i = 20;


    while ( i <= 40 ){
        soma = soma + i;
        i++;
        printf("\n%d", soma);

    }

    printf ("\n Resultado com While: %d", soma);

    soma = 0;
    for (i = 20; i <=40: i++){
        soma = soma + i;

        printf("Resultado do for: %d", soma);
    }







return 0;
}

// Escreva um programa que some todos os valores contidos no intervalo 20 e 40 (20+21+22+...+40)
// Ao final do programa deve mostrar o resultado do calculo
// Faça esse exercicio usando while e refaça usando for
