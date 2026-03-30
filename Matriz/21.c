#include <stdio.h>

int main(){
    float A[2][2], B[2][2], C[2][2], k;
    int i, j, op;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++) scanf("%f",&A[i][j]);
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++) scanf("%f",&B[i][j]);
    }

    scanf("%d",&op);

    if(op==1){
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                C[i][j]=A[i][j]+B[i][j];
                printf("%.2f ", C[i][j]);
            }
            printf("\n");
        }
    }
    else if(op==2){
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                C[i][j]=B[i][j]-A[i][j];
                printf("%.2f ", C[i][j]);
            }
            printf("\n");
        }
    }
    else if(op==3){
        scanf("%f",&k);
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                A[i][j]+=k;
                B[i][j]+=k;
            }
        }
    }
    else if(op==4){
        for(i=0;i<2;i++){
            for(j=0;j<2;j++) printf("%.2f ", A[i][j]);
            printf("\n");
        }
        printf("\n");
        for(i=0;i<2;i++){
            for(j=0;j<2;j++) printf("%.2f ", B[i][j]);
            printf("\n");
        }
    }

    return 0;
}