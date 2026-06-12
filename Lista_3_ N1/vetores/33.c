#include <stdio.h>

int main() {
    int v[15], tam = 15;
    for (int i = 0; i < tam; i++) { printf("v[%d]: ", i); scanf("%d", &v[i]); }
    for (int i = 0; i < tam; i++)
        if (v[i] == 0) {
            for (int j = i; j < tam - 1; j++) v[j] = v[j+1];
            tam--; i--;
        }
    for (int i = 0; i < tam; i++) printf("%d\n", v[i]);
    return 0;
}