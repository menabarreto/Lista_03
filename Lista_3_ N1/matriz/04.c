#include <stdio.h>

int main() {
    int m[4][4], li = 0, lj = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) { printf("m[%d][%d]: ", i, j); scanf("%d", &m[i][j]); }
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (m[i][j] > m[li][lj]) { li = i; lj = j; }
    for (int i = 0; i < 4; i++) { for (int j = 0; j < 4; j++) printf("%d ", m[i][j]); printf("\n"); }
    printf("Maior: %d em [%d][%d]\n", m[li][lj], li, lj);
    return 0;
}