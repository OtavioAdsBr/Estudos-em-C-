#include <stdio.h>
#define TAMANHO 10

int main () {

int numeros[TAMANHO],x,contador = 0;

printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }


    printf("Digite o numero X para contar sua ocorrencia: ");
    scanf("%d", &x);


    for (int i = 0; i < 10; i++) {
        if (numeros[i] == x) {
            contador++;
        }
    }

    printf("\nO numero %d aparece %d vezes no array.\n", x, contador);



return 0;
}
