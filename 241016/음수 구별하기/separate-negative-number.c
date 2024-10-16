#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    printf("%d",a);
    if (a < 0)
        printf("minus");
    return 0;
}