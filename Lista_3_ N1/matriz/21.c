#include <stdio.h>

int main() {
    float a[2][2], b[2][2], c[2][2], k;
    int op;
    for (int i = 0; i < 2; i++) for (int j = 0; j < 2; j++) { printf("a[%d][%d]: ", i, j); scanf("%f", &a[i][j]); }
    for (int i = 0; i < 2; i++) for (int j = 0; j < 2; j++) { printf("b[%d][%d]: ", i, j); scanf("%f", &b[i][j]); }
    printf("1-Somar 2-Subtrair 3-Constante 4-Imprimir\nOpcao: ");
    scanf("%d", &op);
    if (op == 1) {
        for (int i = 0; i < 2; i++) for (int j = 0; j < 2; j++) c[i][j] = a[i][j] + b[i][j];
        for (int i = 0; i < 2; i++) { for (int j = 0; j < 2; j++) printf("%.2f ", c[i][j]); printf("\n"); }
    } else if (op == 2) {
        for (int i = 0; i < 2; i++) for (int j = 0; j < 2; j++) c[i][j] = a[i][j] - b[i][j];
        for (int i = 0; i < 2; i++) { for (int j = 0; j < 2; j++) printf("%.2f ", c[i][j]); printf("\n"); }
    } else if (op == 3) {
        printf("Constante: "); scanf("%f", &k);
        for (int i = 0; i < 2; i++) for (int j = 0; j < 2; j++) { a[i][j] += k; b[i][j] += k; }
        for (int i = 0; i < 2; i++) { for (int j = 0; j < 2; j++) printf("%.2f ", a[i][j]); printf("\n"); }
    } else {
        printf("A:\n"); for (int i = 0; i < 2; i++) { for (int j = 0; j < 2; j++) printf("%.2f ", a[i][j]); printf("\n"); }
        printf("B:\n"); for (int i = 0; i < 2; i++) { for (int j = 0; j < 2; j++) printf("%.2f ", b[i][j]); printf("\n"); }
    }
    return 0;
}
