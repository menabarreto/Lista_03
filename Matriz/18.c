#include <stdio.h>

int main(){
    int m[3][3], v[3]={0};
    int i, j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&m[i][j]);
        }
    }

    for(j=0;j<3;j++){
        for(i=0;i<3;i++){
            v[j]+=m[i][j];
        }
    }

    for(i=0;i<3;i++) printf("%d ", v[i]);

    return 0;
}