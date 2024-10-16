#include <stdio.h>

int main() {
    int a,b,c,min;
    scanf("%d %d %d",&a,&b,&c);

    if (b < c)
        min = b;
    else
        min = c;
    if( a <= min)
        min = a;
    printf("%d %d",a==min,a == b && b == c && a== c);



    return 0;
}