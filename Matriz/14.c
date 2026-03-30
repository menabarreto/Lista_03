#include <stdio.h>
#include <stdlib.h>

int main(){
    int cartela[5][5], usado[100]={0};
    int i, j, num;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            do{
                num = rand()%100;
            }while(usado[num]);
            usado[num]=1;
            cartela[i][j]=num;
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%2d ", cartela[i][j]);
        }
        printf("\n");
    }

    return 0;
}