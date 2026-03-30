#include <stdio.h>

int main(){
    int m[5][4], i, j, maior=0;
    float media=0;

    for(i=0;i<5;i++){
        scanf("%d %d %d",&m[i][0],&m[i][1],&m[i][2]);
        m[i][3] = m[i][1] + m[i][2];
    }

    for(i=1;i<5;i++){
        if(m[i][3] > m[maior][3]) maior=i;
    }

    for(i=0;i<5;i++){
        media += m[i][3];
    }

    printf("%d\n", m[maior][0]);
    printf("%.2f", media/5);

    return 0;
}