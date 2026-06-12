#include <stdio.h>

int main() {
    int a, b, va[5] = {0}, vb[5] = {0}, vc[5] = {0};
    printf("a: "); scanf("%d", &a);
    printf("b: "); scanf("%d", &b);
    int tmp = a;
    for (int i = 0; tmp > 0; i++) { va[i] = tmp % 10; tmp /= 10; }
    tmp = b;
    for (int i = 0; tmp > 0; i++) { vb[i] = tmp % 10; tmp /= 10; }
    int carry = 0;
    for (int i = 0; i < 5; i++) {
        int s = va[i] + vb[i] + carry;
        vc[i] = s % 10;
        carry = s / 10;
    }
    printf("Soma: ");
    int print = 0;
    for (int i = 4; i >= 0; i--) { if (vc[i] || print) { printf("%d", vc[i]); print = 1; } }
    printf("\n");
    return 0;
}