#include <stdio.h>

int main(){
    int a, b, va[10], vb[10], vc[20];
    int i=0, j=0, k=0, carry=0;

    scanf("%d %d",&a,&b);

    while(a>0){
        va[i++]=a%10;
        a/=10;
    }

    while(b>0){
        vb[j++]=b%10;
        b/=10;
    }

    int max = i>j?i:j;

    for(int x=0;x<max;x++){
        int soma = carry;
        if(x<i) soma+=va[x];
        if(x<j) soma+=vb[x];

        vc[k++]=soma%10;
        carry=soma/10;
    }

    if(carry) vc[k++]=carry;

    for(int x=0;x<k;x++) printf("%d ", vc[x]);

    return 0;
}