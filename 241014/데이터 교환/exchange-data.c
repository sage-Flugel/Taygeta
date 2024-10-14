#include <stdio.h>

int main() {
    int a=5,b=6,c=7;
    int k = 0;
    k = b;
    b = a;
    a = c;
    c= k;
    printf("%d\n%d\n%d",a,b,c);

    return 0;
}