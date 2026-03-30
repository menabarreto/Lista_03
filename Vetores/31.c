#include <stdio.h>

int main(){
    int A[10], B[10], C[20], i, j, k=0, existe;

    for(i=0;i<10;i++) scanf("%d",&A[i]);
    for(i=0;i<10;i++) scanf("%d",&B[i]);

    for(i=0;i<10;i++){
        C[k++]=A[i];
    }

    for(i=0;i<10;i++){
        existe=0;
        for(j=0;j<10;j++){
            if(B[i]==A[j]) existe=1;
        }
        if(!existe){
            C[k++]=B[i];
        }
    }

    for(i=0;i<k;i++) printf("%d ", C[i]);

    return 0;
}