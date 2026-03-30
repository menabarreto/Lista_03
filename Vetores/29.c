#include <stdio.h>

int main(){
    int v[6], i, soma=0, qtd=0;

    for(i=0;i<6;i++) scanf("%d",&v[i]);

    for(i=0;i<6;i++){
        if(v[i]%2==0){
            printf("%d ", v[i]);
            soma+=v[i];
        }
    }

    printf("\n%d\n", soma);

    for(i=0;i<6;i++){
        if(v[i]%2!=0){
            printf("%d ", v[i]);
            qtd++;
        }
    }

    printf("\n%d", qtd);

    return 0;
}