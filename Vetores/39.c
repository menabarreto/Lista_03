#include <stdio.h>

int main(){
    int n, i, j;
    scanf("%d",&n);

    int t[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(j==0 || j==i) t[i][j]=1;
            else t[i][j]=t[i-1][j-1]+t[i-1][j];
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}