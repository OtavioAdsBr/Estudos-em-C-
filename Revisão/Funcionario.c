#include <stdio.h>

int main(){

int id;
double Vhoras, Nhoras, salario;

printf("Escreva seu numero: ", id);
scanf("%d", &id);

printf("Escreva seu numero de horas trabalhado: ", &Vhoras);
scanf("%lf", &Vhoras);

printf("Escreva o valor que recebe por horas: ", &Nhoras);
scanf("%lf", &Nhoras);

salario = Vhoras * Nhoras;

printf("NUMERO = %d \n",id);
printf("SALARIO U$ = %.2lf",salario);

return 0;
}
