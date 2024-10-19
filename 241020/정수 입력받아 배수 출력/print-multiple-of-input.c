#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);

    for(int i = 1; i <= 5; i++)
        printf("%d ",i*a);
    return 0;
}