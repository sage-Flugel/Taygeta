#include <stdio.h>

int main() {
    int a=3,b=5;
    int k = 0;
    k = a;
    a = b;
    b = k;

    printf("%d\n%d",a,b);

    return 0;
}