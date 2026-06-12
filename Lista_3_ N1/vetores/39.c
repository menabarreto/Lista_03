#include <stdio.h>

int main() {
    int n, t[100][100];
    printf("n: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        t[i][0] = t[i][i] = 1;
        for (int j = 1; j < i; j++)
            t[i][j] = t[i-1][j-1] + t[i-1][j];
        for (int j = 0; j <= i; j++) printf("%d ", t[i][j]);
        printf("\n");
    }
    return 0;
}