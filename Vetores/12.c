#include <stdio.h>

int main() {
    float v[5], soma = 0, maior, menor;

    for(int i = 0; i < 5; i++) {
        scanf("%f", &v[i]);
        soma += v[i];

        if(i == 0) {
            maior = menor = v[i];
        } else {
            if(v[i] > maior) maior = v[i];
            if(v[i] < menor) menor = v[i];
        }
    }

    for(int i = 0; i < 5; i++) {
        printf("%f\n", v[i]);
    }

    printf("%f %f %f\n", maior, menor, soma / 5);

    return 0;
}