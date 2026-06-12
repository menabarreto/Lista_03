#include <stdio.h>

int main() {
    int v[10], k = 0, n;
    while (k < 10) {
        printf("v[%d]: ", k);
        scanf("%d", &n);
        int dup = 0;
        for (int i = 0; i < k; i++) if (v[i] == n) { dup = 1; break; }
        if (dup) printf("Numero ja digitado.\n");
        else v[k++] = n;
    }
    for (int i = 0; i < 10; i++) printf("%d\n", v[i]);
    return 0;
}