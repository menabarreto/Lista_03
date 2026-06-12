#include <stdio.h>

int main() {
    float v[10], tmp;
    for (int i = 0; i < 10; i++) { printf("v[%d]: ", i); scanf("%f", &v[i]); }
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9 - i; j++)
            if (v[j] > v[j+1]) { tmp = v[j]; v[j] = v[j+1]; v[j+1] = tmp; }
    for (int i = 0; i < 10; i++) printf("%.2f\n", v[i]);
    return 0;
}