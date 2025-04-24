#include <stdio.h>
#include <ctype.h> //classificação e manipulação de caracteres.(Verificar se um caractere é uma letra, número ou símbolo / Transformar letras minúsculas em maiúsculas)

int main() {
    char str[1000];
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    for (int idx = 0; str[idx] != '\0'; idx++) {
        char ch = tolower(str[idx]);
        if (ch == 'a') a++;
        else if (ch == 'e') e++;
        else if (ch == 'i') i++;
        else if (ch == 'o') o++;
        else if (ch == 'u') u++;
    }

    printf("Quantidade de cada vogal:\n");
    printf("a: %d\n", a);
    printf("e: %d\n", e);
    printf("i: %d\n", i);
    printf("o: %d\n", o);
    printf("u: %d\n", u);

    return 0;
}

