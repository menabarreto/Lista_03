#include <stdio.h>

int main() {
    int num[10];
    float alt[10];
    for (int i = 0; i < 10; i++) {
        printf("Aluno %d - numero e altura: ", i + 1);
        scanf("%d %f", &num[i], &alt[i]);
    }
    int pAlto = 0, pBaixo = 0;
    for (int i = 1; i < 10; i++) {
        if (alt[i] > alt[pAlto]) pAlto = i;
        if (alt[i] < alt[pBaixo]) pBaixo = i;
    }
    printf("Mais alto: aluno %d (%.2fm)\n", num[pAlto], alt[pAlto]);
    printf("Mais baixo: aluno %d (%.2fm)\n", num[pBaixo], alt[pBaixo]);
    return 0;
}