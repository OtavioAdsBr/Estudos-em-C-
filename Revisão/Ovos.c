#include <stdio.h>

int main(){
int quantidade;
float precoU, total;

    printf("Digite a quantidade de ovos comprados:\n");
    scanf("%d", &quantidade);

    if (quantidade < 12){
        precoU = 0.35;
    }else {
        precoU = 0.30;
    }
    total = quantidade * precoU;

    printf("Valor total da compra: R$ %.2f\n", total);

return 0;
}
