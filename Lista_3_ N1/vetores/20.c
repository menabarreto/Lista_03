#include <stdio.h>

int main() {
    int v1[10], v2[10], k = 0;
    for (int i = 0; i < 10; i++) {
        do {
            printf("v1[%d] (0-50): ", i);
            scanf("%d", &v1[i]);
        } while (v1[i] < 0 || v1[i] > 50);
        if (v1[i] % 2 != 0) v2[k++] = v1[i];
    }
    printf("v1: ");
    for (int i = 0; i < 10; i += 2) printf("%d %d\n", v1[i], v1[i+1]);
    printf("v2 (impares): ");
    for (int i = 0; i < k; i += 2) {
        printf("%d", v2[i]);
        if (i + 1 < k) printf(" %d", v2[i+1]);
        printf("\n");
    }
    return 0;
}