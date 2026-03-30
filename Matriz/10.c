#include <stdio.h>

int main(){
    int m[3][3], i, j, soma=0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&m[i][j]);
            if(i==j) soma+=m[i][j];
        }
    }

    printf("%d", soma);

    return 0;
}