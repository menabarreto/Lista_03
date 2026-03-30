#include <stdio.h>

int main(){
    int v[50], i;
    for(i=0;i<50;i++){
        v[i] = (i + 5*i) % (i+1);
    }
    for(i=0;i<50;i++) printf("%d ", v[i]);
    return 0;
}