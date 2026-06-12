#include <stdio.h>

int main() {
    float m[10][3];
    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 3; j++) { printf("Aluno %d prova %d: ", i+1, j+1); scanf("%f", &m[i][j]); }
    for (int i = 0; i < 10; i++) {
        int pior = 0;
        for (int j = 1; j < 3; j++) if (m[i][j] < m[i][pior]) pior = j;
        if (pior == 0) c1++;
        else if (pior == 1) c2++;
        else c3++;
    }
    printf("Pior na prova 1: %d\nPior na prova 2: %d\nPior na prova 3: %d\n", c1, c2, c3);
    return 0;
}
