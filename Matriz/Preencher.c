#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 4
#define COL 5

int main() {
    int m[LIN][COL];
    int i, j;


    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            m[i][j] = rand() % 100;
        }
    }


    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}

