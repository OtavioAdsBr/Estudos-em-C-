#include <stdio.h>

int main(){

int num1, num2, soma, mult, div;

    printf("\nEscolha um numero: ");
    scanf("%d", &num1);

    printf("\nEscolha outro numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    mult = num1 * num2;
    div = num1 / num2;

    printf("\nSoma: %d + %d = %d", num1,num2, soma);
    printf("\nMultiplicacao: %d * %d = %d", num1,num2, mult);
    printf("\nDivisao: %d / %d = %d", num1,num2, div);

    return 0;


}
