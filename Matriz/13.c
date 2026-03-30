#include <stdio.h>
#include <stdlib.h>

int main(){
    int m[4][4], i, j;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            m[i][j] = rand()%20 + 1;
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(j>i) m[i][j]=0;
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