#include <stdio.h>

int verificarVencedor(int t[3][3], int p) {
    for (int i = 0; i < 3; i++)
        if ((t[i][0]==p && t[i][1]==p && t[i][2]==p) ||
            (t[0][i]==p && t[1][i]==p && t[2][i]==p)) return 1;
    if ((t[0][0]==p && t[1][1]==p && t[2][2]==p) ||
        (t[0][2]==p && t[1][1]==p && t[2][0]==p)) return 1;
    return 0;
}

int main() {
    int t[3][3];
    printf("Tabuleiro (-1=minha, 0=vazio, 1=oponente):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) { printf("t[%d][%d]: ", i, j); scanf("%d", &t[i][j]); }

    if (verificarVencedor(t, -1)) { printf("Voce venceu!\n"); return 0; }
    if (verificarVencedor(t, 1))  { printf("Oponente venceu!\n"); return 0; }

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (t[i][j] == 0) {
                t[i][j] = -1;
                if (verificarVencedor(t, -1)) {
                    printf("Jogar em [%d][%d] para vencer.\n", i, j);
                    return 0;
                }
                t[i][j] = 0;
            }

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (t[i][j] == 0) {
                t[i][j] = 1;
                if (verificarVencedor(t, 1)) {
                    t[i][j] = 0;
                    printf("Jogar em [%d][%d] para bloquear oponente.\n", i, j);
                    return 0;
                }
                t[i][j] = 0;
            }

    int ordem[3] = {1, 0, 2};
    for (int a = 0; a < 3; a++)
        for (int b = 0; b < 3; b++) {
            int i = ordem[a], j = ordem[b];
            if (t[i][j] == 0) { printf("Jogar em [%d][%d].\n", i, j); return 0; }
        }

    printf("Empate.\n");
    return 0;
}
