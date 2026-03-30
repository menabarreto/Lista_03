#include <stdio.h>

int main() {
    int v[10], i, j;
    for(i=0;i<10;i++) scanf("%d",&v[i]);

    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(v[i]==v[j]){
                printf("%d\n", v[i]);
                break;
            }
        }
    }
    return 0;
}