#include <stdio.h>

int main() {
    float v[10], soma = 0;
    int neg = 0;
    for (int i = 0; i < 10; i++) {
        printf("v[%d]: ", i);
        scanf("%f", &v[i]);
        if (v[i] < 0) neg++;
        else soma += v[i];
    }
    printf("Negativos: %d\nSoma positivos: %.2f\n", neg, soma);
    return 0;
}