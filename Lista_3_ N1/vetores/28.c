#include <stdio.h>

int main() {
    int v[10], v1[10], v2[10], k1 = 0, k2 = 0;
    for (int i = 0; i < 10; i++) { printf("v[%d]: ", i); scanf("%d", &v[i]); }
    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 != 0) v1[k1++] = v[i];
        else v2[k2++] = v[i];
    }
    printf("Impares: "); for (int i = 0; i < k1; i++) printf("%d ", v1[i]);
    printf("\nPares: ");  for (int i = 0; i < k2; i++) printf("%d ", v2[i]);
    printf("\n");
    return 0;
}