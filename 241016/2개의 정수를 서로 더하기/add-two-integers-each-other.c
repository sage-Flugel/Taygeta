#include <stdio.h>

int main() {
    int a,b;
    a+=b;
    b+=a;
    scanf("%d %d",&a,&b);
    printf("%d %d",a,b);
    return 0;
}