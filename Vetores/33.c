#include <stdio.h>

int main(){
    int v[15], i, j, n=15;

    for(i=0;i<15;i++) scanf("%d",&v[i]);

    for(i=0;i<n;i++){
        if(v[i]==0){
            for(j=i;j<n-1;j++){
                v[j]=v[j+1];
            }
            n--;
            i--;
        }
    }

    for(i=0;i<n;i++) printf("%d ", v[i]);

    return 0;
}