#include <stdio.h>

int main(){
    int A[10], B[10], C[10], i, j, k=0, existe;

    for(i=0;i<10;i++) scanf("%d",&A[i]);
    for(i=0;i<10;i++) scanf("%d",&B[i]);

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(A[i]==B[j]){
                existe=0;
                for(int x=0;x<k;x++){
                    if(C[x]==A[i]) existe=1;
                }
                if(!existe){
                    C[k]=A[i];
                    k++;
                }
            }
        }
    }

    for(i=0;i<k;i++) printf("%d ", C[i]);

    return 0;
}