#include <stdio.h>
#define TAMANHO 6

int main(){

int numeros[TAMANHO], temp;

    printf("Digite 6 numeros inteiros:\n");

    for (int i = 0; i < 6; i++){
        printf("Numeros %d:", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 6; i++){
        temp = numeros[i];
        numeros[i] = numeros [5 - i];
        numeros[5 - i] = temp;

    }

    printf("\nArray invertido:\n");

    for (int i = 6; i >= 0; i--){
        printf("%d", numeros[i]);
    }

    printf("\n");

return 0;
}
