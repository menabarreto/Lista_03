#include <stdio.h>

int main(){
    int v[10], i;
    for(i=0;i<10;i++){
        scanf("%d",&v[i]);
        if(v[i]<0) v[i]=0;
    }
    for(i=0;i<10;i++) printf("%d ", v[i]);
    return 0;
}