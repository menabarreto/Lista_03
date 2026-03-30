#include <stdio.h>

int main(){
    int v[10], i=0, j, num, existe;

    while(i<10){
        scanf("%d",&num);
        existe=0;

        for(j=0;j<i;j++){
            if(v[j]==num) existe=1;
        }

        if(!existe){
            v[i]=num;
            i++;
        }
    }

    for(i=0;i<10;i++) printf("%d ", v[i]);

    return 0;
}