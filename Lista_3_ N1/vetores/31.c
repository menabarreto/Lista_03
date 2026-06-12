#include <stdio.h>

int main() {
    int a[10], b[10], c[20], k = 0;
    for (int i = 0; i < 10; i++) { printf("a[%d]: ", i); scanf("%d", &a[i]); }
    for (int i = 0; i < 10; i++) { printf("b[%d]: ", i); scanf("%d", &b[i]); }
    for (int i = 0; i < 10; i++) c[k++] = a[i];
    for (int i = 0; i < 10; i++) {
        int dup = 0;
        for (int j = 0; j < k; j++) if (c[j] == b[i]) { dup = 1; break; }
        if (!dup) c[k++] = b[i];
    }
    printf("Uniao: ");
    for (int i = 0; i < k; i++) printf("%d ", c[i]);
    printf("\n");
    return 0;
}