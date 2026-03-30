#include <stdio.h>

int main() {
    float v[5], maior, menor;
    int posMaior, posMenor;

    for(int i = 0; i < 5; i++) {
        scanf("%f", &v[i]);

        if(i == 0) {
            maior = menor = v[i];
            posMaior = posMenor = i;
        } else {
            if(v[i] > maior) {
                maior = v[i];
                posMaior = i;
            }
            if(v[i] < menor) {
                menor = v[i];
                posMenor = i;
            }
        }
    }

    printf("%d %d\n", posMaior, posMenor);

    return 0;
}