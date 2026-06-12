#include <stdio.h>

int main() {
    int v[6], i = 0;
    while (i < 6) {
        printf("v[%d] (par): ", i);
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0) i++;
        else printf("Numero invalido.\n");
    }
    for (int j = 5; j >= 0; j--)
        printf("%d\n", v[j]);
    return 0;
}