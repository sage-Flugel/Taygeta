#include <stdio.h>

int main() {
    int a,b,i;
    scanf("%d %d",&a,&b);
    int sum = a;
    for(i = 1; i <= b; i++){
        sum *=a;
    }
    printf("%d",sum);
    return 0;
}