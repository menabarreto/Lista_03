#include <stdio.h>

int main(){
    int v[20], i, j, repetido;
    for(i=0;i<20;i++) scanf("%d",&v[i]);

    for(i=0;i<20;i++){
        repetido=0;
        for(j=0;j<i;j++){
            if(v[i]==v[j]) repetido=1;
        }
        if(!repetido) printf("%d ", v[i]);
    }
    return 0;
}