#include <stdio.h>

int main(){
    int v1[10], v2[10], i, j=0;

    for(i=0;i<10;i++) scanf("%d",&v1[i]);

    for(i=0;i<10;i++){
        if(v1[i]%2!=0){
            v2[j]=v1[i];
            j++;
        }
    }

    for(i=0;i<10;i++){
        printf("%d ", v1[i]);
        if((i+1)%2==0) printf("\n");
    }

    for(i=0;i<j;i++){
        printf("%d ", v2[i]);
        if((i+1)%2==0) printf("\n");
    }

    return 0;
}