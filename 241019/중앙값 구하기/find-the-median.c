#include <stdio.h>

int main() {
    int a,b,c,mid;
    scanf("%d %d %d",&a,&b,&c);

    if (a > b && c < a)
        mid = a;
    if (a < b && c > a)
        mid = a;
    if (b > a && b < c)
        mid = b;
    if (b < a && b > c)
        mid = b;
    if (c > a && c < b)
        mid = c;
    if (c < a && c > b)
        mid = c;
    printf("%d",mid);

    return 0;
}