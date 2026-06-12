#include <stdio.h>

int main() {
    int m[3][3], t[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) { printf("m[%d][%d]: ", i, j); scanf("%d", &m[i][j]); }
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) t[j][i] = m[i][j];
    printf("Transposta:\n");
    for (int i = 0; i < 3; i++) { for (int j = 0; j < 3; j++) printf("%d ", t[i][j]); printf("\n"); }
    return 0;
}