#include <stdio.h>

int main() {
    int a= 0;
    scanf("%d",&a);
    if (a % 13 == 0 || a % 19 == 0)
        printf("True");
    else
        printf("False");


    return 0;
}