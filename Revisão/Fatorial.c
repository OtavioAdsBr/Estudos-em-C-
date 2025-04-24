#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fatorial = 1;


    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fatorial nao e definido para numeros negativos.\n");
    } else {

        for (i = 1; i <= n; i++) {
            fatorial *= i;
        }
        // %llu imprime o valor da vari�vel 'fatorial' do tipo unsigned long long
        printf("%d! = %llu\n", n, fatorial);
    }

    return 0;
}
