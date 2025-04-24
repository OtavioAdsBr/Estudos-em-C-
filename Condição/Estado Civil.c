#include <stdio.h>

int main (){
    char civil;

    printf("Escolha uma letra entre: S, C, D, V: \n");
    scanf("%c", &civil);

    switch (civil){
        case 'S':
        case 's':
            printf("Solteiro\n");
            break;

        case 'C':
        case 'c':
            printf("Casado\n");
            break;

        case 'D':
        case 'd':
            printf("Divorciado\n");
            break;

        case 'V':
        case 'v':
            printf("Viuvo\n");
            break;

        default:
            printf("Letra invalida! Digite alguma das seguintes letras S, C, D,V.\n");

    }


    return 0;
}
