#include <stdio.h>

int main() {
    int v[8], x, y;
    for (int i = 0; i < 8; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    printf("X: "); scanf("%d", &x);
    printf("Y: "); scanf("%d", &y);
    printf("Soma: %d\n", v[x] + v[y]);
    return 0;
}