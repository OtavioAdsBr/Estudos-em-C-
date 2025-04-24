#include <stdio.h>

int main(){
int num1, num2;

    printf("Digite dois numeros inteiros separados por espaço:\n");
    scanf("%d %d",&num1,&num2);

    if (num1 == num2){
        printf("Os numeros sao iguais.\n");
    }else {
        printf("OS numeros sao diferente\n");
    }

return 0;
}
