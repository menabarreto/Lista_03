#include <stdio.h>

int main() {
    int v1[10], v2[10], v3[10];
    for (int i = 0; i < 10; i++) { printf("v1[%d]: ", i); scanf("%d", &v1[i]); }
    for (int i = 0; i < 10; i++) { printf("v2[%d]: ", i); scanf("%d", &v2[i]); }
    for (int i = 0; i < 10; i++)
        v3[i] = (i % 2 == 0) ? v1[i] : v2[i];
    for (int i = 0; i < 10; i++) printf("%d\n", v3[i]);
    return 0;
}