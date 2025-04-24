#include <stdio.h>

int main (){
    int sala, soma;


    printf("\nDigite o valor do salario: ");
    scanf("%d", &sala);

    soma = sala + (sala * 0.25);

    printf("\nNovo salario e de: %d", soma);



    return 0;
}
