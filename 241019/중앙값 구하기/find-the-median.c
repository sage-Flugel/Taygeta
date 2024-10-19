#include <stdio.h>

int main() {
    int a,b,c,mid;
    scanf("%d %d %d",&a,&b,&c);


//a < b < c
    if (a < b && b < c)
        mid = b;
    if (c < b && b < a)
        mid = b;
//b < a < c
    if (b < a && a < c)
        mid = a;
    if (c < a && a <b)
        mid = a;
// a < c < b
    if (a < c && c < b)
        mid = c;
    if (b < c && c < a)
        mid = c;
    


    printf("%d",mid);

    return 0;
}