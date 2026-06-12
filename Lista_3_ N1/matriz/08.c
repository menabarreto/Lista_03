#include <stdio.h>

int main() {
    int m[3][3], soma = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) { printf("m[%d][%d]: ", i, j); scanf("%d", &m[i][j]); }
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (j > i) soma += m[i][j];
    printf("Soma acima da diagonal: %d\n", soma);
    return 0;
}
