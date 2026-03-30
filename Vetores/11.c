#include <stdio.h>

int main() {
    float v[10], soma = 0;
    int negativos = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%f", &v[i]);
        if(v[i] < 0) negativos++;
        else soma += v[i];
    }

    printf("%d %f\n", negativos, soma);

    return 0;
}