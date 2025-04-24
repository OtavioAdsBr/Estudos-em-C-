#include <stdio.h>

int main() {
    int num, cont_positivos = 0, cont_negativos = 0;
    float multiplicacao_positivos = 1.0, soma_negativos = 0.0;

    while (1) {

        printf("Digite um numero diferente de zero (ou 0 para encerrar): ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num > 0) {
            multiplicacao_positivos *= num;
            cont_positivos++;
        }

        else {
            soma_negativos += num;
            cont_negativos++;
        }
    }


    printf("\nQuantidade de numeros positivos: %d\n", cont_positivos);
    printf("Quantidade de numeros negativos: %d\n", cont_negativos);

    if (cont_positivos > 0) {
        printf("Multiplicacao dos numeros positivos: %.2f\n", multiplicacao_positivos);
    } else {
        printf("Nenhum numero positivo foi digitado.\n");
    }

    if (cont_negativos > 0) {
        printf("Soma dos numeros negativos: %.2f\n", soma_negativos);
    } else {
        printf("Nenhum numero negativo foi digitado.\n");
    }

    return 0;
}

