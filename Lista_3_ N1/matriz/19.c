#include <stdio.h>

int main() {
    int m[5][4], pMaior = 0;
    for (int i = 0; i < 5; i++) {
        printf("Matricula aluno %d: ", i+1); scanf("%d", &m[i][0]);
        printf("Media provas: ");   scanf("%d", &m[i][1]);
        printf("Media trabalhos: "); scanf("%d", &m[i][2]);
        m[i][3] = m[i][1] + m[i][2];
    }
    float somaFinal = 0;
    for (int i = 0; i < 5; i++) {
        somaFinal += m[i][3];
        if (m[i][3] > m[pMaior][3]) pMaior = i;
    }
    printf("Maior nota final: matricula %d\n", m[pMaior][0]);
    printf("Media das notas finais: %.2f\n", somaFinal / 5);
    return 0;
}
