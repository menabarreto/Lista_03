#include <stdio.h>

int main() {
    float v[5], soma = 0;
    float maior, menor, media;
    for (int i = 0; i < 5; i++) {
        printf("v[%d]: ", i);
        scanf("%f", &v[i]);
        soma += v[i];
    }
    maior = menor = v[0];
    for (int i = 1; i < 5; i++) {
        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
    }
    media = soma / 5;
    printf("Valores: ");
    for (int i = 0; i < 5; i++) printf("%.2f ", v[i]);
    printf("\nMaior: %.2f  Menor: %.2f  Media: %.2f\n", maior, menor, media);
    return 0;
}