#include <stdio.h>

int primo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int v[10];
    for (int i = 0; i < 10; i++) { printf("v[%d]: ", i); scanf("%d", &v[i]); }
    for (int i = 0; i < 10; i++)
        if (primo(v[i])) printf("%d na posicao %d\n", v[i], i);
    return 0;
}