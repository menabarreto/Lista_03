#include <stdio.h>

int main(){
    int x[5], y[5], i, j;

    for(i=0;i<5;i++) scanf("%d",&x[i]);
    for(i=0;i<5;i++) scanf("%d",&y[i]);

    for(i=0;i<5;i++) printf("%d ", x[i]+y[i]);
    printf("\n");

    for(i=0;i<5;i++) printf("%d ", x[i]*y[i]);
    printf("\n");

    for(i=0;i<5;i++){
        int existe=0;
        for(j=0;j<5;j++){
            if(x[i]==y[j]) existe=1;
        }
        if(!existe) printf("%d ", x[i]);
    }
    printf("\n");

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(x[i]==y[j]){
                printf("%d ", x[i]);
                break;
            }
        }
    }
    printf("\n");

    for(i=0;i<5;i++) printf("%d ", x[i]);

    for(i=0;i<5;i++){
        int existe=0;
        for(j=0;j<5;j++){
            if(y[i]==x[j]) existe=1;
        }
        if(!existe) printf("%d ", y[i]);
    }

    return 0;
}