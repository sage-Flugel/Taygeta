#include <stdio.h>

int main() {
    int i,a,sum=0;
    scanf("%d",&a);
    for(i = a; i<=100;i++){
        sum +=i;
    }
    printf("%d",sum);
    return 0;
}