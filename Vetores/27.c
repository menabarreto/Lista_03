#include <stdio.h>

int primo(int n){
    int i;
    if(n<2) return 0;
    for(i=2;i<n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    int v[10], i;

    for(i=0;i<10;i++) scanf("%d",&v[i]);

    for(i=0;i<10;i++){
        if(primo(v[i])){
            printf("%d %d\n", v[i], i);
        }
    }

    return 0;
}