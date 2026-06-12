#include <stdio.h>

int main() {
    int v[10], x;
    for (int i = 0; i < 10; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    printf("x: "); scanf("%d", &x);
    for (int i = 0; i < 10; i++)
        if (v[i] % x == 0) printf("%d\n", v[i]);
    return 0;
}