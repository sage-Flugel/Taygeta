#include <stdio.h>

int main() {
    int a= 0;
    scanf("%d",&a);
    if (a % 2 == 1 || a % 3 == 0)
        printf("true");
    else if (a % 2 == 0 || a % 5 == 0)
        printf("true");
    else
        printf("false");


    return 0;
}