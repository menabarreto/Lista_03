#include <stdio.h>

int main(){
    int m[5][5], i, j, x, achou=0;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&m[i][j]);
        }
    }

    scanf("%d",&x);

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(m[i][j]==x){
                printf("%d %d\n", i, j);
                achou=1;
            }
        }
    }

    if(!achou) printf("nao encontrado");

    return 0;
}