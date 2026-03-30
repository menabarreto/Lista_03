#include <stdio.h>

int main(){
    int A[11], i, j, temp;

    for(i=0;i<11;i++) scanf("%d",&A[i]);

    for(i=0;i<10;i++){
        for(j=i+1;j<11;j++){
            if(A[i] > A[j]){
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    for(i=0;i<11;i++) printf("%d ", A[i]);

    return 0;
}