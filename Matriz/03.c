#include <stdio.h>

int main(){
    int m[4][4], i, j;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            m[i][j] = i * j;
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}