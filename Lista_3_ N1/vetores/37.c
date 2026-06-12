
#include <stdio.h>

int main() {
    int A[11], tmp;
    for (int i = 0; i < 11; i++) { printf("A[%d]: ", i); scanf("%d", &A[i]); }
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10 - i; j++)
            if (A[j] > A[j+1]) { tmp = A[j]; A[j] = A[j+1]; A[j+1] = tmp; }
    for (int i = 0; i < 11; i++) printf("%d\n", A[i]);
    return 0;
}