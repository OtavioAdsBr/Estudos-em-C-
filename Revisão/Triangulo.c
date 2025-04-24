#include <stdio.h>

int main (){

    float lado1, lado2, lado3;

    printf("Digite os tres lados do triangulo:\n");
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2) {

        if (lado1 == lado2 && lado2 == lado3) {
            printf("Triangulo Equilatero\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("Triangulo Isosceles\n");
        } else {
            printf("Triangulo Escaleno\n");
        }
    } else {
        printf("As medidas fornecidas nao formam um triangulo valido.\n");
    }

return 0;
}
