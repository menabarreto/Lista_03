#include <stdio.h>

int main(){
    float m[10][3];
    int i, menor, c1=0, c2=0, c3=0;

    for(i=0;i<10;i++){
        scanf("%f %f %f",&m[i][0],&m[i][1],&m[i][2]);
    }

    for(i=0;i<10;i++){
        menor=0;
        if(m[i][1] < m[i][menor]) menor=1;
        if(m[i][2] < m[i][menor]) menor=2;

        if(menor==0) c1++;
        else if(menor==1) c2++;
        else c3++;
    }

    printf("%d %d %d", c1, c2, c3);

    return 0;
}