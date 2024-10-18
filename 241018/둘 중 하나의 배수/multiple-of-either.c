#include <stdio.h>

int main() {
    int a= 0;
    scanf("%d",&a);
    if (a % 3 == 0 || a % 5 == 0)
        printf("1");
    else
        printf("0");


    return 0;
}