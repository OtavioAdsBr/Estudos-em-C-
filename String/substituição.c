#include <stdio.h>
#include <string.h>

int main() {
    char str1[200];
    char str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    strcat(str1, str2);

    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == 'a') {
            str1[i] = 'e';
        }
    }

    printf("String resultante: %s\n", str1);

    return 0;
}

