#include <stdio.h>

int main() {
    int v[10], cont = 0;
    for (int i = 0; i < 10; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 10; i++)
        if (v[i] % 2 == 0) cont++;
    printf("Pares: %d\n", cont);
    return 0;
}