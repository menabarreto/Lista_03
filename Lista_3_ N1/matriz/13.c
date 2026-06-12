#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int m[4][4], t[4][4];
    srand(time(NULL));
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) m[i][j] = rand() % 20 + 1;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) t[i][j] = (j > i) ? 0 : m[i][j];
    printf("Original:\n");
    for (int i = 0; i < 4; i++) { for (int j = 0; j < 4; j++) printf("%3d", m[i][j]); printf("\n"); }
    printf("Triangular inferior:\n");
    for (int i = 0; i < 4; i++) { for (int j = 0; j < 4; j++) printf("%3d", t[i][j]); printf("\n"); }
    return 0;
}