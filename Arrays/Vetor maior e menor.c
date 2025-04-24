#include <stdio.h>
#define TAMANHO 10

int main (){
  int numeros[TAMANHO], maior, menor, iMaior, iMenor;

  printf("Digite 10 numeros inteiros: \n");

  for (int i = 0; i < 10; i++){
    printf("Numero %d:", i + 1);
    scanf("%d", &numeros[i]);
  }

  maior = menor = numeros[0];
  iMaior = iMenor = 0;

  for (int i = 1; i < 10; i++){
    if (numeros[i] > maior){
        maior = numeros[i];
        iMaior = i;
    }

     if (numeros[i] < menor) {
        menor = numeros[i];
        iMenor = i;
    }
  }

  printf("\nMaior numero: %d (Indice: %d)\n", maior, iMaior);
  printf("\nMenor numero: %d (Indice: %d)\n", menor, iMenor);


return 0;
}

