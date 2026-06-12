#include <stdio.h>

int main() {
    int a[10], b[10], c[10], k = 0;
    for (int i = 0; i < 10; i++) { printf("a[%d]: ", i); scanf("%d", &a[i]); }
    for (int i = 0; i < 10; i++) { printf("b[%d]: ", i); scanf("%d", &b[i]); }
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            if (a[i] == b[j]) {
                int dup = 0;
                for (int l = 0; l < k; l++) if (c[l] == a[i]) { dup = 1; break; }
                if (!dup) c[k++] = a[i];
            }
    printf("Intersecao: ");
    for (int i = 0; i < k; i++) printf("%d ", c[i]);
    printf("\n");
    return 0;
}