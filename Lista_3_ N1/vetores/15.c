#include <stdio.h>

int main() {
    int v[20], res[20], k = 0;
    for (int i = 0; i < 20; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 20; i++) {
        int dup = 0;
        for (int j = 0; j < k; j++)
            if (res[j] == v[i]) { dup = 1; break; }
        if (!dup) res[k++] = v[i];
    }
    for (int i = 0; i < k; i++) printf("%d\n", res[i]);
    return 0;
}