#include <stdio.h>
#define TAMANHO 6

int main() {

    int numeros[TAMANHO];

    printf("Digite 6 numeros inteiros:\n");
    for (int i = 0; i < 6; i++){
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros na ordem inversa:\n");
    for (int i = 5; i >= 0; i--){
        printf("%d", numeros[i]);
    }
    printf("\n");

return 0;
}
