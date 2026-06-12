#include <stdio.h>

int main() {
    int v[100], k = 0, n = 1;
    while (k < 100) {
        if (n % 7 != 0 || n % 10 == 7)
            v[k++] = n;
        n++;
    }
    for (int i = 0; i < 100; i++) printf("%d\n", v[i]);
    return 0;
}