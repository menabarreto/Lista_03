#include <stdio.h>

int main() {
    int m[5][5], x;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++) { printf("m[%d][%d]: ", i, j); scanf("%d", &m[i][j]); }
    printf("X: "); scanf("%d", &x);
    int achou = 0;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (m[i][j] == x) { printf("Encontrado em [%d][%d]\n", i, j); achou = 1; }
    if (!achou) printf("Nao encontrado.\n");
    return 0;
}