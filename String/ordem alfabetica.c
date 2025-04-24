#include <stdio.h>
#include <string.h> //funções para manipular strings.

int main() {
    char s1[100], s2[100];

    printf("Digite a primeira string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Digite a segunda string: ");
    fgets(s2, sizeof(s2), stdin);


    s1[strcspn(s1, "\n")] = 0;
    s2[strcspn(s2, "\n")] = 0;

    if (strcmp(s1, s2) < 0) {
        printf("Ordem alfabetica:\n%s\n%s\n", s1, s2);
    } else {
        printf("Ordem alfabetica:\n%s\n%s\n", s2, s1);
    }

    return 0;
}
