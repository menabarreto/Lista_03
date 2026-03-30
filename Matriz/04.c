#include <stdio.h>

int main(){
    int m[4][4], i, j, maior, li, lj;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&m[i][j]);
        }
    }

    maior = m[0][0];
    li = 0;
    lj = 0;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(m[i][j] > maior){
                maior = m[i][j];
                li = i;
                lj = j;
            }
        }
    }

    printf("%d %d %d", maior, li, lj);

    return 0;
}