#include <stdio.h>
#include <math.h>

int main(){
    float v[10], media=0, soma=0;
    int i;

    for(i=0;i<10;i++){
        scanf("%f",&v[i]);
        media+=v[i];
    }

    media/=10;

    for(i=0;i<10;i++){
        soma += pow(v[i]-media,2);
    }

    soma = sqrt(soma/9);

    printf("%.2f", soma);

    return 0;
}