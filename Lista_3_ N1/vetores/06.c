#include <stdio.h>

int main() {
    int v[10];
    for (int i = 0; i < 10; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    int maior = v[0], menor = v[0];
    for (int i = 1; i < 10; i++) {
        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
    }
    printf("Maior: %d\nMenor: %d\n", maior, menor);
    return 0;
}