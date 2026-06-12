#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int cartela[5][5];
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++) {
            int n, dup;
            do {
                dup = 0;
                n = rand() % 100;
                for (int a = 0; a < i; a++)
                    for (int b = 0; b < 5; b++)
                        if (cartela[a][b] == n) dup = 1;
                for (int b = 0; b < j; b++)
                    if (cartela[i][b] == n) dup = 1;
            } while (dup);
            cartela[i][j] = n;
        }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) printf("%3d", cartela[i][j]);
        printf("\n");
    }
    return 0;
}
