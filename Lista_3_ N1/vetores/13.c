#include <stdio.h>

int main() {
    float v[5];
    int pMaior = 0, pMenor = 0;
    for (int i = 0; i < 5; i++) {
        printf("v[%d]: ", i);
        scanf("%f", &v[i]);
    }
    for (int i = 1; i < 5; i++) {
        if (v[i] > v[pMaior]) pMaior = i;
        if (v[i] < v[pMenor]) pMenor = i;
    }
    printf("Posicao maior: %d\nPosicao menor: %d\n", pMaior, pMenor);
    return 0;
}