#include <stdio.h>

int main() {
    float m[3][6], somaImp = 0, media24 = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 6; j++) { printf("m[%d][%d]: ", i, j); scanf("%f", &m[i][j]); }
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 6; j += 2) somaImp += m[i][j];
    for (int i = 0; i < 3; i++) media24 += m[i][1] + m[i][3];
    media24 /= 6;
    for (int i = 0; i < 3; i++) m[i][5] = m[i][0] + m[i][1];
    printf("Soma colunas impares: %.2f\n", somaImp);
    printf("Media colunas 2 e 4: %.2f\n", media24);
    printf("Matriz modificada:\n");
    for (int i = 0; i < 3; i++) { for (int j = 0; j < 6; j++) printf("%.2f ", m[i][j]); printf("\n"); }
    return 0;
}
