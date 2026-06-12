#include <stdio.h>

int main() {
    int v[6];
    for (int i = 0; i < 6; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 6; i++)
        printf("%d\n", v[i]);
    return 0;
}