#include <stdio.h>

int main() {
    int m[4][4], cont = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) { printf("m[%d][%d]: ", i, j); scanf("%d", &m[i][j]); }
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (m[i][j] > 10) cont++;
    printf("Maiores que 10: %d\n", cont);
    return 0;
}