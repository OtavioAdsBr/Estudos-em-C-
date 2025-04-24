#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main(){

double r, area;

printf("Digite um numero");
scanf("%lf", &r);

area = PI * (r * r);

printf("Resposta: %.5lf",area);

return 0;
}


