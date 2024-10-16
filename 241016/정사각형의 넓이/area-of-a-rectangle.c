#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d",&n);
    printf("%d\n",n*n);
    if(n>5)
        printf("tiny");
    return 0;
}