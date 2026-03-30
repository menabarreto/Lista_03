#include <stdio.h>

int main(){
    float x[5], y[5], prod=0;
    int i;

    for(i=0;i<5;i++) scanf("%f",&x[i]);
    for(i=0;i<5;i++) scanf("%f",&y[i]);

    for(i=0;i<5;i++){
        prod += x[i]*y[i];
    }

    printf("%.2f", prod);
    return 0;
}