#include <stdio.h>

int main() {
    // 전의 2 원소합이 다음 수가 되는게 피보나치
    int a,b,i;
    int k[10];
    scanf("%d %d",&a,&b);

    k[0] = a;
    k[1] = b;

    for(i = 2;i<10;i++){
        k[i] = k[i-1]+k[i-2];
    }
    for(i = 0;i<10;i++){
        printf("%d ",k[i] % 10);
    }

    return 0;
}