#include <stdio.h>

int main(){
    int v[10], i, j, temp;

    for(i=0;i<10;i++){
        scanf("%d",&v[i]);

        for(j=i;j>0 && v[j] < v[j-1]; j--){
            temp = v[j];
            v[j] = v[j-1];
            v[j-1] = temp;
        }
    }

    for(i=0;i<10;i++) printf("%d ", v[i]);

    return 0;
}