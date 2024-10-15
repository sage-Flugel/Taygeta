#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %.1lf",a+b,(double)(a+b)/2);
    return 0;
}