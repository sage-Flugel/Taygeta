#include <stdio.h>

int main() {
    int a=0,b= 0;
    scanf("%d %d",&a,&b);

    if (a %2 ==0)
        printf("even\n");
    else
        printf("odd\n");
    if (b %2 ==0)
        printf("even\n");
    else
        printf("odd\n");
    return 0;
}