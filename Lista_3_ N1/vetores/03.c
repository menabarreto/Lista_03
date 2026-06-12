#include <stdio.h>

int main() {
    float v[10], q[10];
    for (int i = 0; i < 10; i++) {
        printf("v[%d]: ", i);
        scanf("%f", &v[i]);
        q[i] = v[i] * v[i];
    }
    printf("\nVetor original:\n");
    for (int i = 0; i < 10; i++)
        printf("%.2f\n", v[i]);
    printf("\nVetor quadrado:\n");
    for (int i = 0; i < 10; i++)
        printf("%.2f\n", q[i]);
    return 0;
}