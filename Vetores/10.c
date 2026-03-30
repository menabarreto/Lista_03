#include <stdio.h>

int main() {
    float v[15], soma = 0;

    for(int i = 0; i < 15; i++) {
        scanf("%f", &v[i]);
        soma += v[i];
    }

    printf("%f\n", soma / 15);

    return 0;
}