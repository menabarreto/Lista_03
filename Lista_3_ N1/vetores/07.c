#include <stdio.h>

int main() {
    int v[10];
    for (int i = 0; i < 10; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    int maior = v[0], pos = 0;
    for (int i = 1; i < 10; i++)
        if (v[i] > maior) { maior = v[i]; pos = i; }
    printf("Vetor: ");
    for (int i = 0; i < 10; i++) printf("%d ", v[i]);
    printf("\nMaior: %d na posicao %d\n", maior, pos);
    return 0;
}