#include <stdio.h>

int main() {
    char respostas[5][10], gabarito[10], resultado[5];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 10; j++) {
            printf("Aluno %d questao %d: ", i+1, j+1);
            scanf(" %c", &respostas[i][j]);
        }
    for (int j = 0; j < 10; j++) { printf("Gabarito %d: ", j+1); scanf(" %c", &gabarito[j]); }
    for (int i = 0; i < 5; i++) {
        resultado[i] = 0;
        for (int j = 0; j < 10; j++)
            if (respostas[i][j] == gabarito[j]) resultado[i]++;
        printf("Aluno %d: %d acertos\n", i+1, resultado[i]);
    }
    return 0;
}
