#include <stdio.h>

int main() {
    int v[10], maior, pos;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
        if(i == 0) {
            maior = v[i];
            pos = i;
        } else {
            if(v[i] > maior) {
                maior = v[i];
                pos = i;
            }
        }
    }

    for(int i = 0; i < 10; i++) {
        printf("%d\n", v[i]);
    }

    printf("%d %d\n", maior, pos);

    return 0;
}