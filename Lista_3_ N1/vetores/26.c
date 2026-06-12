#include <stdio.h>
#include <math.h>

int main() {
    float v[10], soma = 0, media, desv = 0;
    for (int i = 0; i < 10; i++) {
        printf("v[%d]: ", i);
        scanf("%f", &v[i]);
        soma += v[i];
    }
    media = soma / 10;
    for (int i = 0; i < 10; i++)
        desv += (v[i] - media) * (v[i] - media);
    printf("Desvio padrao: %.4f\n", sqrt(desv / 9));
    return 0;
}