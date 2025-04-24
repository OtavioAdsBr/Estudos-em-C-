#include <stdio.h>
#define TAMANHO 5

int main (){

int numeros[TAMANHO], multiplicador;
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Digite o numero multiplicador: ");
    scanf("%d", &multiplicador);

    printf("\nArray resultante apos a multiplicacao:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i] * multiplicador);
    }
    printf("\n");

return 0;
}
