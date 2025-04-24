#include <stdio.h>
#include <math.h>
#define A 2
#define B 3
#define C 5

int main(){

double a,b,c;
double media, soma;

printf("Digite valor da nota:");
scanf("%lf",&a);
printf("Digite valor da nota:");
scanf("%lf",&b);
printf("Digite valor da nota:");
scanf("%lf",&c);

soma = (a*A) + (b*B) + (c*C);
media = soma / 10;

printf("A media e: %.1lf", media);

return 0;
}


