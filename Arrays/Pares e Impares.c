#include <stdio.h>
#define TAMANHO 8

int main(){

int numeros[TAMANHO], pares = 0, impares = 0;

    printf("Digite 8 numeros inteiros:\n");
    for (int i = 0; i < 8; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);


        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }


    printf("\nQuantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);




return 0;
}
