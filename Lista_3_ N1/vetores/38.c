#include <stdio.h>

int main() {
    int v[10], k = 0, n, tmp;
    while (k < 10) {
        printf("Valor %d: ", k + 1);
        scanf("%d", &n);
        v[k++] = n;
        for (int i = k - 1; i > 0 && v[i] < v[i-1]; i--) {
            tmp = v[i]; v[i] = v[i-1]; v[i-1] = tmp;
        }
    }
    for (int i = 0; i < 10; i++) printf("%d\n", v[i]);
    return 0;
}