#include <stdio.h>

int main() {
    int v[6], somaPar = 0, contImp = 0;
    for (int i = 0; i < 6; i++) { printf("v[%d]: ", i); scanf("%d", &v[i]); }
    printf("Pares: ");
    for (int i = 0; i < 6; i++) if (v[i] % 2 == 0) { printf("%d ", v[i]); somaPar += v[i]; }
    printf("\nSoma pares: %d\n", somaPar);
    printf("Impares: ");
    for (int i = 0; i < 6; i++) if (v[i] % 2 != 0) { printf("%d ", v[i]); contImp++; }
    printf("\nQuantidade impares: %d\n", contImp);
    return 0;
}