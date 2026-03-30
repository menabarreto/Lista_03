#include <stdio.h>

int main(){
    char resp[5][10], gab[10];
    int resultado[5]={0};
    int i, j;

    for(i=0;i<5;i++){
        for(j=0;j<10;j++){
            scanf(" %c",&resp[i][j]);
        }
    }

    for(i=0;i<10;i++) scanf(" %c",&gab[i]);

    for(i=0;i<5;i++){
        for(j=0;j<10;j++){
            if(resp[i][j]==gab[j]) resultado[i]++;
        }
    }

    for(i=0;i<5;i++) printf("%d ", resultado[i]);

    return 0;
}