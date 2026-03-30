#include <stdio.h>

int main(){
    int m[4][4], i, j, cont=0;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&m[i][j]);
            if(m[i][j]>10) cont++;
        }
    }

    printf("%d", cont);

    return 0;
}