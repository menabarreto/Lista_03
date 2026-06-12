#include <stdio.h>

int main() {
    int v[10];
    for (int i = 0; i < 10; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 10; i++)
        for (int j = i + 1; j < 10; j++)
            if (v[i] == v[j]) { printf("%d\n", v[i]); break; }
    return 0;
}