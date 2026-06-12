#include <stdio.h>

int main() {
    float notas[15], soma = 0;
    for (int i = 0; i < 15; i++) {
        printf("Nota aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    printf("Media: %.2f\n", soma / 15);
    return 0;
}