#include <stdio.h>
#define TAMANHO 5

int main (){

    float salarios[TAMANHO], soma = 0.0, media = 0.0;
    int CPF[TAMANHO];
    int i;

    for(i = 0; i < TAMANHO; i++){
        printf("Digite o CPF da pessoa %d:\n", i);
        scanf("%d", &CPF[i]);

        printf("Digite o Salario da pessoa %d: ", i);
        scanf("%f", &salarios[i]);
    }

     for(i = 0; i < TAMANHO; i++){

        soma = salarios[i] + soma;
     }

     media = soma / TAMANHO;

     for (i = 0; i < TAMANHO; i++){

        if(salarios[i] > media){
            printf("/n%d", CPF[i]);
        }
     }

return 0;
}
