#include <stdio.h>

int main(){
    int v[100], i=0, num=1;

    while(i<100){
        if(num%7!=0 && num%10!=7){
            v[i]=num;
            i++;
        }
        num++;
    }

    for(i=0;i<100;i++) printf("%d ", v[i]);

    return 0;
}