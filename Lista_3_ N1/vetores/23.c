#include <stdio.h>

int main() {
    float x[5], y[5], produto = 0;
    for (int i = 0; i < 5; i++) { printf("x[%d]: ", i); scanf("%f", &x[i]); }
    for (int i = 0; i < 5; i++) { printf("y[%d]: ", i); scanf("%f", &y[i]); }
    for (int i = 0; i < 5; i++) produto += x[i] * y[i];
    printf("x: "); for (int i = 0; i < 5; i++) printf("%.2f ", x[i]);
    printf("\ny: "); for (int i = 0; i < 5; i++) printf("%.2f ", y[i]);
    printf("\nProduto escalar: %.2f\n", produto);
    return 0;
}