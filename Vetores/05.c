#include <stdio.h>

int main() {
    int v[10], cont = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
        if(v[i] % 2 == 0) {
            cont++;
        }
    }

    printf("%d\n", cont);

    return 0;
}