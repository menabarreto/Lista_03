#include <stdio.h>

int main() {
    int A[10], B[10], C[10];
    for (int i = 0; i < 10; i++) { printf("A[%d]: ", i); scanf("%d", &A[i]); }
    for (int i = 0; i < 10; i++) { printf("B[%d]: ", i); scanf("%d", &B[i]); }
    for (int i = 0; i < 10; i++) C[i] = A[i] - B[i];
    printf("C: ");
    for (int i = 0; i < 10; i++) printf("%d ", C[i]);
    printf("\n");
    return 0;
}