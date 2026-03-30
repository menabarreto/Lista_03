#include <stdio.h>

int main(){
    int v[10], v1[10], v2[10];
    int i, j=0, k=0;

    for(i=0;i<10;i++) scanf("%d",&v[i]);

    for(i=0;i<10;i++){
        if(v[i]%2!=0){
            v1[j]=v[i];
            j++;
        } else {
            v2[k]=v[i];
            k++;
        }
    }

    for(i=0;i<j;i++) printf("%d ", v1[i]);
    printf("\n");
    for(i=0;i<k;i++) printf("%d ", v2[i]);

    return 0;
}