#include <stdio.h>

int main() {
    int a,b,i,sum=1;
    scanf("%d %d",&a,&b);
    for(i = a; i<=b; i++){
        sum *= i;
    }
    printf("%d",sum);
    return 0;
}