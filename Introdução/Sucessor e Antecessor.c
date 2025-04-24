#include <stdio.h>

int main(){

    int suces, antec, num, dobro, soma, triplo;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &num);

    triplo = num * 3;
    suces = triplo + 1;

    dobro = num * 2;
    antec = dobro - 1;

    soma = suces + antec;

    printf("\nResultado: %d", soma);


    return 0;
}
