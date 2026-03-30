#include <stdio.h>

int main(){
    char gab[10], resp[3][10];
    int mat[3], i, j, nota[3]={0}, aprov=0;

    for(i=0;i<10;i++) scanf(" %c",&gab[i]);

    for(i=0;i<3;i++){
        scanf("%d",&mat[i]);
        for(j=0;j<10;j++){
            scanf(" %c",&resp[i][j]);
            if(resp[i][j]==gab[j]) nota[i]++;
        }
    }

    for(i=0;i<3;i++){
        printf("%d ", mat[i]);
        for(j=0;j<10;j++) printf("%c ", resp[i][j]);
        printf("%d\n", nota[i]);
        if(nota[i]>=7) aprov++;
    }

    printf("%.2f", (aprov/3.0)*100);

    return 0;
}