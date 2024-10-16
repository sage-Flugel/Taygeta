#include <stdio.h>

int main() {
    int a = 0;
    scanf("%d",&a);

    if(a % 2==0)
        a /=2;
    if(a % 2 == 1)
        a = (a+1)/2;
    return 0;
}