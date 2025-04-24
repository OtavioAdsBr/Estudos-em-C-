#include <stdio.h>

int main() {
    int n, i;
    float soma = 0.0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, digite um número maior que zero.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        soma += 1.0 / i;
    }

    printf("Soma = %.4f\n", soma);

    return 0;
}

