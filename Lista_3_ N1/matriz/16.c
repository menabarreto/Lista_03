#include <stdio.h>

int main() {
    char gabarito[10], respostas[3][10];
    int matriculas[3], notas[3], aprovados = 0;
    for (int j = 0; j < 10; j++) { printf("Gabarito %d: ", j+1); scanf(" %c", &gabarito[j]); }
    for (int i = 0; i < 3; i++) {
        printf("Matricula aluno %d: ", i+1); scanf("%d", &matriculas[i]);
        notas[i] = 0;
        for (int j = 0; j < 10; j++) {
            printf("Resposta %d: ", j+1); scanf(" %c", &respostas[i][j]);
            if (respostas[i][j] == gabarito[j]) notas[i]++;
        }
    }
    for (int i = 0; i < 3; i++) {
        printf("Matricula: %d | Respostas: ", matriculas[i]);
        for (int j = 0; j < 10; j++) printf("%c", respostas[i][j]);
        printf(" | Nota: %d\n", notas[i]);
        if (notas[i] >= 7) aprovados++;
    }
    printf("Aprovados: %.1f%%\n", (aprovados / 3.0) * 100);
    return 0;
}
