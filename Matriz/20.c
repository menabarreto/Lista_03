#include <stdio.h>

int main(){
    float m[3][6], soma=0, media=0;
    int i, j;

    for(i=0;i<3;i++){
        for(j=0;j<6;j++){
            scanf("%f",&m[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<6;j++){
            if(j%2!=0) soma+=m[i][j];
        }
    }

    printf("%.2f\n", soma);

    for(i=0;i<3;i++){
        media += m[i][1] + m[i][3];
    }

    printf("%.2f\n", media/6);

    for(i=0;i<3;i++){
        m[i][5] = m[i][0] + m[i][1];
    }

    for(i=0;i<3;i++){
        for(j=0;j<6;j++){
            printf("%.2f ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}