#include <stdio.h>

int main() {
    int a,b,c,k;
    scanf("%d %d %d",&a,&b,&c);

    if (a >= b && a >= c)
        k = a;
    else if( b >= a && b >=c)
        k = b;
    else
        k = c;

    printf("%d",k);
    return 0;
}