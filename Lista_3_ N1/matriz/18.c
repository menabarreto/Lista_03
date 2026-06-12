#include <stdio.h>

int main() {
    int m[3][3], v[3] = {0};
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) { printf("m[%d][%d]: ", i, j); scanf("%d", &m[i][j]); }
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) v[j] += m[i][j];
    for (int j = 0; j < 3; j++) printf("Coluna %d: %d\n", j+1, v[j]);
    return 0;
}
